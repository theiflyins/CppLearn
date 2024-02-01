#include<iostream>
#include<cstring>
#include<string>
#include<cctype>
#include"chapter1.h" 
#include<array>
#include<thread>
#include<future>
#include<random>    
#include"chapterThread.h" 
#include<atomic>


using namespace std;


void CwPointedSt(promise<int>& ans){
    ans.set_value(rand());
}


int main(){
    atomic<int> tmpAtomicValue;
    std::thread producerThread(Productor);
    std::thread consumerThread(Consumer);

    producerThread.join();
    consumerThread.join();

    return 0;
}