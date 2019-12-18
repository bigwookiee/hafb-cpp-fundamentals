/*
** carton.h for hafb-cpp-fundamentals in c:\Users\CCEClass1.AD.000\Documents\hafb-cpp-fundamentals\Module2\LA2-4\src
**
** Made by 
** Login   <>
**
** Started on  Wed Dec 18 9:33:36 AM 2019 
** Last update Wed Dec 18 9:33:36 AM 2019 
*/

#pragma once

class Carton{
    private: 
        double width_;
        double length_;
        double height_;
        

    public:
        double width();
        double length();
        double height();

        Carton();
        Carton(double width, double length, double height);

};