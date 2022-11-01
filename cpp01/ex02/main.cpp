#include <iostream>
#include <string>

// Verificar que este exercicio faz sentido

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR;
    std::string stringREF;

    stringPTR = &str;
    stringREF = str;

    std::cout << "Memory address of the string variable: " << &str << "\n";
    std::cout << "Memory address held by stringPTR: " << stringPTR << "\n";
    std::cout << "Memory address held by stringREF: " << &stringREF << "\n";

    std::cout << "Value of string variable: " << str << "\n";
    std::cout << "Value pointed by stringPTR: " << *stringPTR << "\n";
    std::cout << "Value pointed by stringREF: " << stringREF << "\n";

    std::cout << "VERIFICAR ESTE EXERCICIO NAO SEI BEM PARA ONDE APONTAR O QUE\n";

    return (0);
}