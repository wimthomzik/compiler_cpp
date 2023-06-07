// #include makes included libraries visible for compiler

#include <iostream> //standart input-output stream: iostream library provide input and output functions using streams (sequence of bytes)
#include <string>
#include <vector>


//define set of TokenTypes that are used in C++
enum TokenType {//enum short for enumeration allows to define a set of named constants
    KEYWORD,    //write symbolic constants in upper case
    IDENTIFIER,
    INTEGER_LITERAL,
    FLOATING_POINT_LITERAL,
    STRING_LITERAL,
    CHARACTER_LITERAL,
    BOOLEAN_LITERAL,
    OPERATOR,
    PUNCTUATION,
    COMMENT,
    PREPROCESSOR_DIRECTIVE
};

//Define types of scope used for tokens in C++
enum ScopeType {
    GLOBAL_SCOPE,
    NAMESPACE_SCOPE,
    LOCAL_SCOPE,
    CLASS_SCOPE,
    STATEMENT_SCOPE,
    FUNCTION_SCOPE
};

//Create Token struct to associate every characterisric about each token found in the code
struct Token {
    TokenType type;
    std::string value; //actual value of literal
    std::string lexeme; //actual sequence of characters in the source code that forms the token.
    int line; //position
    int column; //position
    ScopeType scope; //scope of token (context in which it is visible and useable)
    int precedence; //precedence of C++ operators stores as integers (see table for order)
    int associativity; //associativity of C++ operators stored as precedence integers (see table for order)
};
