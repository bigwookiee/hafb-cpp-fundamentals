/*
** counter.h for hafb-cpp-fundamentals in c:\Users\CCEClass1.AD.000\Documents\hafb-cpp-fundamentals\hafb-module3\LA3-1\src
**
** Made by 
** Login   <>
**
** Started on  Wed Dec 18 3:32:06 PM 2019 
** Last update Wed Dec 18 3:32:06 PM 2019 
*/

#pragma once
#include <iostream>

class Counter
{
private:
    unsigned int count_;
    
public:
    Counter() : count_(0) {}
    Counter(unsigned int count) : count_(count){}
    ~Counter(){}

    auto count() {return count_;}
    void setCount(unsigned int count){count_ = count;}

    Counter operator ++() { return Counter(++count_); }
    Counter operator ++(int);
};

