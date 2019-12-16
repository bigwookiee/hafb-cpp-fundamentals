/**
 * @file main.cpp
 * @author your name (you@domain.com)
 * @brief Because I can.
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#include <iostream>
#include <array>
#include "factor.h"
using namespace std;

const int kSize = 30;
// Function Prototype
bool div3(int);

// Main Function
int main()
{
  

  for (auto index = 0; index < kSize; ++index){
    if (div3(index)){
      cout << "divs by 3: " << index << endl;
    }
  }

  return 0;
}

