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
#include "factor.h"

using namespace std;

const int kSize = 30;

int main()
{
  for (auto index = 1; index <= kSize; ++index){
    if (div3(index)){
      cout << "divs by 3: " << index << endl;
    }
  }

  return 0;
}