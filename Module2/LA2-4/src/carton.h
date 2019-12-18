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
#include <ostream>

class Carton{
    private: 
        double width_;
        double length_;
        double height_;
        

    public:
        static const double KMaxSize;
        static const double KMinWidth;
        static const double KMinLength;
        static const double KMinHeight;

        double width() const;
        double length() const;
        double height() const;
        

    void setWidth(double width);
    void setLength(double length);
    void setHeight(double height);
    void setDimensions(double width, double length,double height);

    double volume() const;

    void displayDimensions(int boxId);
    void displayVolume(int boxId);
    void displayDimensionsWithVolume(int boxId);

    void wrightData(std::ostream &out) const;

        Carton();
        Carton(double width, double length, double height);
        ~Carton();

};