#include "height.h"
#include <iostream>

void printFeet(Height h1){
    std::cout << "Your height is inchers is: " <<
    h1.inches_ << std::endl;
    std::cout << "Your height in feet is : " <<
    h1.inches_/12 << std::endl;
}

void printFeet2(Height h1){
    std::cout << "Your height is inchers is: " <<
    h1.inches() << std::endl;
    std::cout << "Your height in feet is : " <<
    h1.inches()/12 << std::endl;
}


