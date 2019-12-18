/*
** height.h for hafb-cpp-fundamentals in c:\Users\CCEClass1.AD.000\Documents\hafb-cpp-fundamentals\hafb-module3\LA3-1
**
** Made by 
** Login   <>
**
** Started on  Wed Dec 18 2:32:05 PM 2019 
** Last update Wed Dec 18 2:32:05 PM 2019 
*/

#pragma once

class Height{
    private:
        double inches_;

    public:
        Height() { inches_ = 0;}
        Height(double inches) : inches_(inches){}
        ~Height() {}
        double inches() const {return inches_;}
        void setInches(double inches) {inches_ = inches;}

        friend void printFeet(Height h1);
};
void printFeet2(Height h1);
