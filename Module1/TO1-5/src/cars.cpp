#include <iostream>
#include "cars.h"

int horsePower(){
    return 150;
}

int lamborghini::horsePower(){
    return 750;
}

int porsche::horsePower(){
    return 450;
}

void lamborghini::cout() {
    std::cout << "My super Car ";
}
