 #include "carton.h"
 #include <iostream>
 #include <exception>
 
const double Carton::KMaxSize = 100;
const double Carton::KMinWidth = 6;
const double Carton::KMinLength = 3;
const double Carton::KMinHeight = 0.25;

 Carton::Carton(){
     width_ = 0;
     length_ = 0;
     height_ = 0;
 }

Carton::Carton(double width, double length, double height) {
    try
    {
        setDimensions(width, length, height);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        throw;
    }
    
   
}

Carton::~Carton(){
};

double Carton::width() const{
    return width_;
}

double Carton::length() const{
    return length_;
}

double Carton::height()const{
    return height_;
};

void Carton::setDimensions(double width, double length,double height){
    try{
        setWidth(width);
        setLength(length);
        setHeight(height);
    } catch(const std::exception& e) {
        throw;
    }

}

void Carton::setWidth(double width){
    if(width < KMinWidth || width > KMaxSize){
        throw std::out_of_range("Width is out side of build dimenstions.\n");
    }

    width_ = width;
}

void Carton::setLength(double length){
    if(length < KMinLength || length > KMaxSize){
        throw std::out_of_range("Length is out side of build dimenstions.\n");
    }

    length_ = length;
}

void Carton::setHeight(double height){
    if(height < KMinHeight || height > KMaxSize){
        throw std::out_of_range("Height is out side of build dimenstions.\n");
    }

    height_ = height;
}

void Carton::displayDimensions() {
  std::cout << "Box's width:  " << width() << std::endl;
  std::cout << "Box's length: " << length() << std::endl;
  std::cout << "Box's height: " << height() << std::endl;
}

double Carton::volume() const{
    return width() * length() * height();
}

void Carton::displayVolume(){
    std::cout << "Box's volume: " << volume() << std::endl;
}

void Carton::displayDimensionsWithVolume(){
    displayDimensions();
    displayVolume();
}
