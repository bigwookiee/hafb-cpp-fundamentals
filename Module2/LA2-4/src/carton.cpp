 #include "carton.h"
 #include <iostream>
 
 Carton::Carton(){
     width_ = 0;
     length_ = 0;
     height_ = 0;
 }

Carton::Carton(double width, double length, double height) {
    width_ = width;
    length_ = length;
    height_ = height;
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

void Carton::setWidth(double width){
    width_ = width;
}

void Carton::setLength(double length){
    length_ = length;
}

void Carton::setHeight(double height){
    height_ = height;
}

void Carton::displayDimensions() {
  std::cout << "Box width:  " << width() << std::endl;
  std::cout << "Box length: " << length() << std::endl;
  std::cout << "Box height: " << height() << std::endl;
}