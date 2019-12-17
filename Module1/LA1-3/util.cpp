#include <iostream>
#include <array>
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

int Max (int x, int y){
  if (x > y)
  return x;

  return y;
}

int Max (int x, int y, int z){
  return max(max(x,y), z);
}



int Max (const array<int, 10> &num){
  int max = 0;
  for (auto ray : num){
    max = Max(max,ray);
  }

  return max;
}

void cleanArray(std::array<int,10> &nums){
  for (auto index = 0; index < nums.size(); ++index){
    nums[index] = 0;
  }
}