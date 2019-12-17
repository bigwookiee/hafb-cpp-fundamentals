#include <iostream>
#include "util.h"

using namespace std;

/**
 * @brief adds two numbers.
 * 
 * @param x 
 * @param y 
 * @return int 
 */
int sum(int x, int y){
  return x + y;
}

/**
 * @brief increments num by one;
 * 
 * @param step 
 */
void updateStep(int step){
    cout << "Step is: " << step << endl;
    step++;
    cout << "Updated Step: " << step << endl;
}

void AddressVersionUpdateStep(int& step) {
    cout << "Step is: " << step << endl;
    step++;
    cout << "Updated Step: " << step << endl;
}