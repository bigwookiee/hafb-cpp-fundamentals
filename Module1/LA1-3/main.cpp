#include <iostream>
#include "util.h"

using namespace std;

// Main Function
int main()
{
  int x = 6, y = 5;
  array<int, 10> ray = {5,3,16,2,16,18,3,4,4,32};

  cout << "the sum of " << x << " and " << y << " is: " << sum(x,y) << "and x = " << x << " y = " << y << endl;

  cout << "using x = " << x << " for step." << endl;
  updateStep(x);
  cout << "X is " << x << endl;

  cout << "using x = " << x << " for step." << endl;
  AddressVersionUpdateStep(x);
  AddressVersionUpdateStep(x);
  AddressVersionUpdateStep(x);
  cout << "X is " << x << endl;

  cout << "mAX OF 5 OR 6 IS " << Max(5,6) << endl;
  cout << "mAX OF 19, 5, OR 6 IS " << Max(5,6,19) << endl;
  cout << "The max of my array is " << Max(ray) << endl;

  cleanArray(ray);

  for (auto num : ray){
    cout << num << endl;
  }

  return 0;
}