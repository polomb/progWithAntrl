cmake_minimum_required(VERSION 3.15 FATAL_ERROR)

project(my_antlr4_example)

set(CMAKE_CXX_STANDARD 17)

option(WITH_DEMO "Enable antlr4 demo (java is required)" OFF)
option(ANTLR_BUILD_CPP_TESTS "Enable antlr4 tests (googletest will be installed)" OFF)
option(WITH_STATIC_CRT "(Visual C++) Enable to statically link CRT (/MT)" OFF)

set(ANTLR_DIR ${CMAKE_SOURCE_DIR}/3rdparty/antlr4-4.13.2/runtime/Cpp)
add_subdirectory(${ANTLR_DIR})

set(ANTLR_INCLUDE ${ANTLR_DIR}/runtime/src)
set(ANTLR_LIB antlr4_static)

set(PARSER_DIR "src/parser")
set(MY_GRAMMAR_EXAMPLE_DIR "src/my_grammar_example")

file(GLOB PARSER_FILES "${PARSER_DIR}/*.*")
file(GLOB MY_GRAMMAR_EXAMPLE_FILES "${MY_GRAMMAR_EXAMPLE_DIR}/*.*")

add_library(my_parser ${PARSER_FILES})

add_executable(my_grammar_example ${MY_GRAMMAR_EXAMPLE_FILES})
target_link_libraries(my_grammar_example my_parser ${ANTLR_LIB})

target_include_directories(my_parser PUBLIC ${ANTLR_INCLUDE})
target_include_directories(my_grammar_example PUBLIC ${PARSER_DIR} ${ANTLR_INCLUDE})
