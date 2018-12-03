//
// Created by guozijun on 2018/12/3.
//
#include <iostream>

#ifndef THREADPOOL_BACKGROUND_TASK_H
#define THREADPOOL_BACKGROUND_TASK_H


class background_task {
public:
    void operator()() const {
        std::cout<<"hello thread"<<std::endl;
    }

    void print(){
        std::cout<<"*********************"<<std::endl;
    }
};


#endif //THREADPOOL_BACKGROUND_TASK_H
