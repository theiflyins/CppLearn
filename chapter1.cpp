#include <iostream>
#include "chapter1.h"

Chapter1::Chapter1(/* args */)
{
}

Chapter1::~Chapter1()
{
}

int Chapter1::exercise1(){
    std::cout<<"Hello World!!!"<<std::endl;    
    return 0;
}

int Chapter1::exercise2()
{
    std::cout<<"Please input:"<<std::endl;

    int tmp;
    std::cin >> tmp;
    tmp = tmp*220;
    std::cout<<"Distance:"<<tmp<<std::endl;

    return tmp*220;
}
