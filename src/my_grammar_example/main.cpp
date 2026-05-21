#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "mygrammarLexer.h"
#include "mygrammarParser.h"
#include "MyVisitor.h"

int main()
{
    std::string filePath = "C:\\Users\\GAMES\\Desktop\\Прог\\Translator\\MyProg\\input.txt";
    std::ifstream readingFile(filePath);
    if (!readingFile.is_open())
    {
        std::cerr << "Error no file " << filePath << std::endl;
        return 1;
    }
    std::stringstream buffer;
    buffer << readingFile.rdbuf();
    std::string expression = buffer.str();
    readingFile.close();
    if (expression.empty())
    {
        std::cerr << "Error file is empty" << std::endl;
        return 1;
    }

    try
    {
        std::stringstream stream(expression);

        antlr4::ANTLRInputStream input(stream);
        mygrammarLexer lexer(&input);
        antlr4::CommonTokenStream tokens(&lexer);
        mygrammarParser parser(&tokens);

        MyVisitor visitor;
        visitor.visit(parser.prog());
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}