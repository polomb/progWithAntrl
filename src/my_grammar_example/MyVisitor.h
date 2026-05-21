#ifndef _MyVisitor_
#define _MyVisitor_

#include <any>
#include <iostream>
#include <variant>
#include <unordered_map>
#include <string>
#include <stdexcept>
#include "mygrammarBaseVisitor.h"
#include "mygrammarParser.h"

class MyVisitor : public mygrammarBaseVisitor
{
private:
    std::unordered_map<std::string, std::variant<int, double>> symbols;

    std::variant<int, double> anyToVariant(const std::any& value)
    {
        if (value.type() == typeid(int))
        {
            return std::any_cast<int>(value);
        }
        else if (value.type() == typeid(double))
        {
            return std::any_cast<double>(value);
        }
        else if (value.type() == typeid(std::variant<int, double>))
        {
            return std::any_cast<std::variant<int, double>>(value);
        }
        throw std::runtime_error("Cannot convert to variant");
    }

    int toInt(const std::any& value)
    {
        if (value.type() == typeid(int))
        {
            return std::any_cast<int>(value);
        }
        else if (value.type() == typeid(double))
        {
            return static_cast<int>(std::any_cast<double>(value));
        }
        else if (value.type() == typeid(std::variant<int, double>))
        {
            auto v = std::any_cast<std::variant<int, double>>(value);
            if (std::holds_alternative<int>(v))
            {
                return std::get<int>(v);
            }
            else
            {
                return static_cast<int>(std::get<double>(v));
            }
        }
        throw std::runtime_error("Cannot convert to int");
    }

    double toDouble(const std::any& value)
    {
        if (value.type() == typeid(int))
        {
            return static_cast<double>(std::any_cast<int>(value));
        }
        else if (value.type() == typeid(double))
        {
            return std::any_cast<double>(value);
        }
        else if (value.type() == typeid(std::variant<int, double>))
        {
            auto v = std::any_cast<std::variant<int, double>>(value);
            if (std::holds_alternative<int>(v))
            {
                return static_cast<double>(std::get<int>(v));
            }
            return std::get<double>(v);
        }
        throw std::runtime_error("Cannot convert to int");
    }

    std::any addValues(const std::any& left, const std::any& right)
    {
        bool leftIsInt = (left.type() == typeid(int)) || (left.type() == typeid(std::variant<int, double>)\
            && std::holds_alternative<int>(std::any_cast<std::variant<int, double>>(left)));
        bool rightIsInt = (right.type() == typeid(int)) || (right.type() == typeid(std::variant<int, double>)\
            && std::holds_alternative<int>(std::any_cast<std::variant<int, double>>(right)));

        if (leftIsInt && rightIsInt)
        {
            return std::any(toInt(left) + toInt(right));
        }
        else
        {
            return std::any(toDouble(left) + toDouble(right));
        }
    }

    std::any subValues(const std::any& left, const std::any& right)
    {
        bool leftIsInt = (left.type() == typeid(int)) || (left.type() == typeid(std::variant<int, double>)\
            && std::holds_alternative<int>(std::any_cast<std::variant<int, double>>(left)));
        bool rightIsInt = (right.type() == typeid(int)) || (right.type() == typeid(std::variant<int, double>)\
            && std::holds_alternative<int>(std::any_cast<std::variant<int, double>>(right)));

        if (leftIsInt && rightIsInt)
        {
            return std::any(toInt(left) - toInt(right));
        }
        else
        {
            return std::any(toDouble(left) - toDouble(right));
        }
    }

    std::any mulValues(const std::any& left, const std::any& right)
    {
        bool leftIsInt = (left.type() == typeid(int)) || (left.type() == typeid(std::variant<int, double>)\
            && std::holds_alternative<int>(std::any_cast<std::variant<int, double>>(left)));
        bool rightIsInt = (right.type() == typeid(int)) || (right.type() == typeid(std::variant<int, double>)\
            && std::holds_alternative<int>(std::any_cast<std::variant<int, double>>(right)));

        if (leftIsInt && rightIsInt)
        {
            return std::any(toInt(left) * toInt(right));
        }
        else
        {
            return std::any(toDouble(left) * toDouble(right));
        }
    }

    std::any divValues(const std::any& left, const std::any& right)
    {
        bool leftIsInt = (left.type() == typeid(int)) || (left.type() == typeid(std::variant<int, double>)\
            && std::holds_alternative<int>(std::any_cast<std::variant<int, double>>(left)));
        bool rightIsInt = (right.type() == typeid(int)) || (right.type() == typeid(std::variant<int, double>)\
            && std::holds_alternative<int>(std::any_cast<std::variant<int, double>>(right)));

        double r = toDouble(right);
        if (r == 0.0) throw std::runtime_error("Division by zero");

        if (leftIsInt && rightIsInt)
        {
            return std::any(toInt(left) / toInt(right));
        }
        else
        {
            return std::any(toDouble(left) / toDouble(right));
        }
    }
public:
    virtual std::any visitProg(mygrammarParser::ProgContext* ctx) override
    {
        for (auto stmt : ctx->statement())
        {
            visit(stmt);
        }
        return 0;
    }

    virtual std::any visitPeremCreating(mygrammarParser::PeremCreatingContext* ctx) override
    {
        std::string type = ctx->peremDeclaration()->type()->getText();
        std::string varName = ctx->peremDeclaration()->ID()->getText();

        if (ctx->peremDeclaration()->expression())
        {
            auto value = visit(ctx->peremDeclaration()->expression());
            auto variantValue = anyToVariant(value);

            if (type == "int" && std::holds_alternative<double>(variantValue))
            {
                throw std::runtime_error("Cannot assign double to int: " + varName);
            }
            symbols[varName] = variantValue;
        }
        else
        {
            if (type == "int") symbols[varName] = 0;
            else symbols[varName] = 0.0;
        }
        return nullptr;
    }

    virtual std::any visitAssignSmth(mygrammarParser::AssignSmthContext* ctx) override
    {
        std::string varName = ctx->assignment()->ID()->getText();
        if (symbols.find(varName) == symbols.end())
        {
            throw std::runtime_error("Variable not declared: " + varName);
        }
        auto& currentVar = symbols[varName];
        auto value = visit(ctx->assignment()->expression());
        auto variantValue = anyToVariant(value);
        if (std::holds_alternative<int>(currentVar))
        {
            if (std::holds_alternative<double>(variantValue))
            {
                double doubleValue = std::get<double>(variantValue);
                throw std::runtime_error("Cannot assign double to int variable: " + varName);
            }
            else
            {
                symbols[varName] = variantValue;
            }
        }
        else
        {
            if (std::holds_alternative<int>(variantValue))
            {
                symbols[varName] = static_cast<double>(std::get<int>(variantValue));
            }
            else
            {
                symbols[varName] = variantValue;
            }
        }
        return nullptr;
    }

    virtual std::any visitIfStmt(mygrammarParser::IfStmtContext* ctx) override
    {
        auto ifStmt = ctx->ifStatement();

        auto condition = visit(ifStmt->expression());
        bool condTrue = (toDouble(condition) != 0.0);

        auto allStatements = ifStmt->statement();

        size_t elseIndex = allStatements.size();
        for (size_t i = 0; i < allStatements.size(); i++)
        {
            if (allStatements[i]->getText().find("else") == 0 && allStatements[i]->getStart()->getText() == "else")
            {
                elseIndex = i;
                break;
            }
        }
        if (condTrue)
        {
            for (size_t i = 0; i < elseIndex; i++)
            {
                if (allStatements[i])
                {
                    visit(allStatements[i]);
                }
            }
        }
        else
        {
            for (size_t i = elseIndex + 1; i < allStatements.size(); i++)
            {
                if (allStatements[i])
                {
                    visit(allStatements[i]);
                }
            }
        }
        return nullptr;
    }

    virtual std::any visitWhileStmt(mygrammarParser::WhileStmtContext* ctx) override
    {
        while (true)
        {
            auto condition = visit(ctx->whileStatement()->expression());
            if (toDouble(condition) == 0.0) break;

            auto statements = ctx->whileStatement()->statement();
            for (size_t i = 0; i < statements.size(); i++)
            {
                if (statements[i]) visit(statements[i]);
            }
        }
        return nullptr;
    }

    virtual std::any visitPrintStmt(mygrammarParser::PrintStmtContext* ctx) override
    {
        auto value = visit(ctx->printStatement()->expression());

        if (value.type() == typeid(int))
        {
            std::cout << std::any_cast<int>(value) << std::endl;
        }
        else if (value.type() == typeid(double))
        {
            std::cout << std::any_cast<double>(value) << std::endl;
        }
        else if (value.type() == typeid(std::variant<int, double>))
        {
            auto v = std::any_cast<std::variant<int, double>>(value);
            if (std::holds_alternative<int>(v))
            {
                std::cout << std::get<int>(v) << std::endl;
            }
            else
            {
                std::cout << std::get<double>(v) << std::endl;
            }
        }
        else
        {
            throw std::runtime_error("Unknown type in print");
        }
        return nullptr;
    }

    virtual std::any visitExprStmt(mygrammarParser::ExprStmtContext* ctx) override
    {
        return visit(ctx->expression());
    }

    virtual std::any visitAdd(mygrammarParser::AddContext* ctx) override
    {
        auto result = visit(ctx->multiplication(0));

        for (size_t i = 1; i < ctx->multiplication().size(); i++)
        {
            std::string op = ctx->children[2 * i - 1]->getText();
            auto right = visit(ctx->multiplication(i));

            if (op == "+")
            {
                result = addValues(result, right);
            }
            else if (op == "-")
            {
                result = subValues(result, right);
            }
        }
        return result;
    }

    virtual std::any visitMultiply(mygrammarParser::MultiplyContext* ctx) override
    {
        auto result = visit(ctx->unary(0));

        for (size_t i = 1; i < ctx->unary().size(); i++)
        {
            std::string op = ctx->children[2 * i - 1]->getText();
            auto right = visit(ctx->unary(i));

            if (op == "*")
            {
                result = mulValues(result, right);
            }
            else if (op == "/")
            {
                result = divValues(result, right);
            }
        }
        return result;
    }

    virtual std::any visitUnary(mygrammarParser::UnaryContext* ctx) override
    {
        if (ctx->primary())
        {
            return visit(ctx->primary());
        }
        else
        {
            auto value = visit(ctx->unary());
            std::string op = ctx->children[0]->getText();
            if (op == "-")
            {
                if (value.type() == typeid(int) || (value.type() == typeid(std::variant<int, double>)\
                    && std::holds_alternative<int>(std::any_cast<std::variant<int, double>>(value))))
                {
                    return std::any(-toInt(value));
                }
                else
                {
                    return std::any(-toDouble(value));
                }
            }
            return value;
        }
    }

    virtual std::any visitIntPrimary(mygrammarParser::IntPrimaryContext* ctx) override
    {
        return std::any(std::stoi(ctx->INT()->getText()));
    }

    virtual std::any visitDoublePrimary(mygrammarParser::DoublePrimaryContext* ctx) override
    {
        return std::any(std::stod(ctx->DOUBLE()->getText()));
    }

    virtual std::any visitIdPrimary(mygrammarParser::IdPrimaryContext* ctx) override
    {
        std::string varName = ctx->ID()->getText();
        if (symbols.find(varName) == symbols.end())
        {
            throw std::runtime_error("Variable not declared: " + varName);
        }
        auto variantValue = symbols[varName];

        if (std::holds_alternative<int>(variantValue))
        {
            return std::any(std::get<int>(variantValue));
        }
        else
        {
            return std::any(std::get<double>(variantValue));
        }
    }

    virtual std::any visitExprPrimary(mygrammarParser::ExprPrimaryContext* ctx) override
    {
        return visit(ctx->expression());
    }

    virtual std::any visitOr(mygrammarParser::OrContext* ctx) override
    {
        if (ctx->logicalAnd().size() == 1)
        {
            return visit(ctx->logicalAnd(0));
        }

        for (size_t i = 0; i < ctx->logicalAnd().size(); i++)
        {
            if (toDouble(visit(ctx->logicalAnd(i))) != 0.0)
            {
                return std::any(1.0);
            }
        }
        return std::any(0.0);
    }

    virtual std::any visitAnd(mygrammarParser::AndContext* ctx) override
    {
        if (ctx->equality().size() == 1)
        {
            return visit(ctx->equality(0));
        }

        for (size_t i = 0; i < ctx->equality().size(); i++)
        {
            if (toDouble(visit(ctx->equality(i))) == 0.0)
            {
                return std::any(0.0);
            }
        }
        return std::any(1.0);
    }

    virtual std::any visitEqual(mygrammarParser::EqualContext* ctx) override
    {
        if (ctx->comparison().size() == 1)
        {
            return visit(ctx->comparison(0));
        }

        double left = toDouble(visit(ctx->comparison(0)));

        for (size_t i = 1; i < ctx->comparison().size(); i++)
        {
            double right = toDouble(visit(ctx->comparison(i)));
            std::string op = ctx->children[2 * i - 1]->getText();

            if (op == "==")
            {
                if (left != right) return std::any(0.0);
            }
            else if (op == "!=")
            {
                if (left == right) return std::any(0.0);
            }
            left = right;
        }
        return std::any(1.0);
    }

    virtual std::any visitCompare(mygrammarParser::CompareContext* ctx) override
    {
        if (ctx->addition().size() == 1)
        {
            return visit(ctx->addition(0));
        }

        double left = toDouble(visit(ctx->addition(0)));

        for (size_t i = 1; i < ctx->addition().size(); i++)
        {
            double right = toDouble(visit(ctx->addition(i)));
            std::string op = ctx->children[2 * i - 1]->getText();

            if (op == "<")
            {
                if (!(left < right)) return std::any(0.0);
            }
            else if (op == ">")
            {
                if (!(left > right)) return std::any(0.0);
            }
            else if (op == "<=")
            {
                if (!(left <= right)) return std::any(0.0);
            }
            else if (op == ">=")
            {
                if (!(left >= right)) return std::any(0.0);
            }
            left = right;
        }
        return std::any(1.0);
    }
};

#endif