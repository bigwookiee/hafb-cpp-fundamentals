#include <iostream>
#include "distance.h"
using namespace std;

// Main Function
int main()
{
  Distance d1 = Distance(3, 10);
  Distance d2 = Distance(10, 18);
  d1.ShowDist();
  d2.ShowDist();

  Distance d3 = d1 + d2;
  d3.ShowDist();

  std::cout << d3 << std::endl;
  return 0;
}

