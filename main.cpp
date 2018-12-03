//
// Created by guozijun on 2018/12/3.
//

#include <iostream>
#include <thread>
#include "background_task.h"
#include <functional>

void my_fun(int i, std::string name)
{
    std::cout<<"i is:"<<i<<" hello my name is: "<<name<<std::endl;
}
int main(int argc, char **argv){
    background_task mytask;
    std::thread my_thread(mytask);
    my_thread.join();
    mytask.print();
    std::string name = "aaa";
    std::function<void(std::string, int)> f = std::bind(my_fun,std::placeholders::_2, std::placeholders::_1);
    std::thread my_thread2(f, name, 5);
    my_thread2.join();
}