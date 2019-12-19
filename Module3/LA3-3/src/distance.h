/*
** distance.h for hafb-cpp-fundamentals in c:\Users\CCEClass1.AD.000\Documents\hafb-cpp-fundamentals\hafb-module3\LA3-3\src
**
** Made by 
** Login   <>
**
** Started on  Wed Dec 18 4:15:42 PM 2019 
** Last update Wed Dec 18 4:15:42 PM 2019 
*/

#pragma once

class Distance{
    private:
        int feet_;
        float inches_;

    public:
        Distance() :feet_(0), inches_(0) {}
        Distance(int feet, float inches) : feet_(feet), inches_(inches) {}
        ~Distance(){}

        int feet() const {return feet_;}
        void setFeet(int feet) {feet_ = feet;}
        float inches() const {return inches_;}
        void setInches(int inches) {inches_ = inches;}

        void ShowDist() const;
};

