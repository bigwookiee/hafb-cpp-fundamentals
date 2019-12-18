 #include "carton.h"
 
 Carton::Carton(){
     width_ = 0;
     length_ = 0;
     height_ = 0;
 }

Carton::Carton(double width, double length, double height) {
    width_ = width;
    length_ = length;
    height_ = height_;
}

double Carton::width(){
    return width_;
}

double Carton::length(){
    return length_;
}

double Carton::height(){
    return height_;
};