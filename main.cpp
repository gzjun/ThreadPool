//
// Created by guozijun on 2018/12/3.
//

#include <iostream>
#include <thread>
#include "background_task.h"

void my_fun()
{
    std::cout<<"hello my func"<<std::endl;
}
int main(int argc, char **argv){
    background_task mytask;
    std::thread my_thread(mytask);
    my_thread.detach();
    mytask.print();
    std::thread my_thread2(my_fun);
    my_thread2.join();
}