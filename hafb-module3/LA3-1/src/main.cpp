#include <iostream>
#include "height.h"
#include "counter.h"

int main(){
    Height h1 = Height(97);
    printFeet(h1);
    printFeet(h1);

    Counter c1, c2;
    std::cout << "C1 : " << c1.count() << std::endl;
    std::cout << "C2 : " << c2.count() << std::endl;
    ++c1;
    ++c2;
    ++c2;
    ++c2;
    ++c2;
    ++c2;
    ++c2;
    ++c2;
    ++c2;
    std::cout << "C1 : " << c1.count() << std::endl;
    std::cout << "C2 : " << c2.count() << std::endl;
    c1 = ++c2;
    std::cout << "C1 : " << c1.count() << std::endl;
    std::cout << "C2 : " << c2.count() << std::endl;
    c1++;
    c1++;
    std::cout << "C1 : " << c1.count() << std::endl;
    c2 = c1++;
    std::cout << "C1 : " << c1.count() << std::endl;
    std::cout << "C2 : " << c2.count() << std::endl;
    return 0;
}