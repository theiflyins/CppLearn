#include <iostream>
#include "chapter1.h" 

int main(){
    char * buff = new char[5];
    std::cin >> buff;
    std::cout << buff << std::endl;
    return 0;
}