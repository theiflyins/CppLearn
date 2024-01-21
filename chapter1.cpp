#include <iostream>
#include "chapter1.h"
#include <string>
#include <cstring>

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

int Chapter1::exercise5_1()
{
    int numsMin = 0;
    int numsMax = 0;
    std::cout<<"please input first nums"<<std::endl;
    std::cin >> numsMin;

    std::cout<<"please input second nums"<<std::endl;
    std::cin >> numsMax;

    int ans = (numsMax+numsMin)*(numsMax-numsMin+1)/2;

    return ans;
}

int Chapter1::exercise5_5()
{
    int** arrayInt = new int*[100];
    for (size_t i = 0; i < 100; i++)
    {
        arrayInt[i] = new int[3];
    }
    
    return 0;
}

int Chapter1::exercise5_8()
{
    char* buffer = new char[1024];
    int count = 0;
    bool flag = true;

    while (flag)
    {
        std::cin >> buffer;
        if (std::strcmp(buffer,"done")==0)
        {
            flag = false;
            break;
        }
        count += std::strlen(buffer);
    }
    
    std::cout<<"count:"<<count<<std::endl;
    return 0;
}

int Chapter1::exercise5_9()
{
    std::string buffer;
    int count = 0;
    bool flag = true;

    while (flag)
    {
        std::cin >> buffer;
        if (buffer == "done")
        {
            flag = false;
            break;
        }
        count += buffer.length();
    }
    
    std::cout<<"count:"<<count<<std::endl;
    return 0;
}

int Chapter1::exercise5_10()
{
    using namespace std;
    int row = 1;
    cin >> row;
    char* tmp = new char[row+1];
    for (int i = 0; i < row; i++)
    {
        tmp[i] = '.';
    }
    tmp[row] = '\0';
    for (int i = row-1; i >=0; i--)
    {
        tmp[i] = '*';
        cout << tmp <<endl;
    }
    return 0;
}
