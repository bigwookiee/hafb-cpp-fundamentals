#include <iostream>
#include "util.h"

using namespace std;

// Main Function
int main()
{
  int x = 6, y = 5;
  cout << "the sum of " << x << " and " << y << " is: " << sum(x,y) << "and x = " << x << " y = " << y << endl;

  cout << "using x = " << x << " for step." << endl;
  updateStep(x);
  cout << "X is " << x << endl;

  cout << "using x = " << x << " for step." << endl;
  AddressVersionUpdateStep(x);
  AddressVersionUpdateStep(x);
  AddressVersionUpdateStep(x);
  cout << "X is " << x << endl;

  return 0;
}