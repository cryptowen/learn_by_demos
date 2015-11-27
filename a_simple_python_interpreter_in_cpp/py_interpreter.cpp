#include <iostream>
#include <string>
#include "Python.h"

int main()
{
    std::cout << "This is A Simple Python Interpreter!\n" << std::endl;
    std::cout << "Type \"exit\" to leave.\n" << std::endl;

    Py_Initialize();                // initialize python

    std::string str;
    std::cout << ">>> ";
    std::getline( std::cin, str );
    while( str != "exit" )
    {
        PyRun_SimpleString( const_cast<char*>( str.c_str() ) );
        std::cout << ">>> ";
        std::getline( std::cin, str );
    }

    Py_Finalize();                  // shut down python

    return 0;
}



