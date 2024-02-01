#include<string>
#include<thread>
#include<iostream>
#include<future>
#include<random>
#include<mutex>
#include<shared_mutex>
#include<condition_variable>

using namespace std;


void ThreadReturnVlaue(promise<int>&ans){
    ans.set_value(rand());
}

void CreateThreadReturnVlaue(){
    promise<int> pro;
    future fue = pro.get_future();
    thread tmpT(ThreadReturnVlaue,ref(pro));

    tmpT.join();
    cout << fue.get()<<endl;
}

void ThreadSwapVlaue(string val,promise<int>&ans){
    ans.set_value(val.length());
}

void CreateThreadSwapVlaue(){
    promise<int> pro;
    future fue = pro.get_future();
    thread tmpT(ThreadSwapVlaue,"aaa",ref(pro));

    tmpT.join();
    cout << fue.get()<<endl;
}

mutex mtx;
shared_mutex readMtx;

void ThreadMutex(){
    static int tmp = 0;
    lock_guard<mutex>lock(mtx);
    tmp++;
    cout << tmp << endl;
}

void ShareRead(){
    shared_lock<shared_mutex> lock(readMtx);
}

void UniqueWrite(){
    unique_lock<shared_mutex> lock(readMtx);
}

condition_variable cv;
mutex mutex1;
bool dataReady = false;

void Productor(){
    unique_lock<mutex> lock(mutex1);
    cout<<"already"<<endl;
    _sleep(1000);
    cv.notify_one();
}

void Consumer(){
    unique_lock<mutex> lock(mutex1);
    cv.wait(lock, [] { cout<<"end"<<endl; return true;}); 
}
