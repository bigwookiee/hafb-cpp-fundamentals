/**
 * @brief determins if a num is divisible by 3.
 * 
 * @param num 
 * @return true 
 * @return false 
 */
#include "factor.h"
#include <iostream>

using namespace std;

/**
 * @brief  checks if a number is divsable by 3.
 * 
 * @param number 
 * @return true 
 * @return false 
 */

bool div3(int number) {
  if (number%3 == 0) {
    return true;
  }
  
    return false;
}

/**
 * @brief checks if a number is divisible by a divisor.
 * 
 * @param number 
 * @param divisor 
 * @return true 
 * @return false 
 */
bool divX(int number, int divisor) {
    if (number%divisor == 0) {
        return true;
    }

    return false;
}

/**
 * @brief for a given range check to see if a number is divisible by a divisor.
 * 
 * @param divisor 
 * @param range 
 */
void divXRange(int divisor, int range) {
    for(int number = 1; number <= range; ++number) {
        if (divX(number, divisor))
        cout << number << " is divisable by " << divisor << endl;  
    }
}

/**
 * @brief Get the Div X Range Count 
 * 
 * @param divisor 
 * @param range 
 * @return int
 */
int getDivXRangeCount(int divisor, int range){
    int count = 0;
    for (int number = 1; number <= range; ++number) {
        if (divX(number,divisor)){
            ++count;
        }
    }

    return count;
}