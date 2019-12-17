#include <iostream>

#include <iostream>
#include "cars.h"
// using namespace std;
// using namespace lamborghini;
// using porsche::horsePower;


int main() 
{
    std::cout << "The lamborghini's horse power: " << lamborghini::horsePower() << std::endl;
    std::cout << "The porsche's horse power: " << porsche::horsePower() << std::endl;
    // :: Is the namesles space. 
    std::cout << "A regular car's horse power: " << ::horsePower() << std::endl; 
    lamborghini::cout();
    return 0;
}
