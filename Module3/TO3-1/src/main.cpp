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
  d3 = d1 - d2;
  d3.ShowDist();
  d3 = d2 - d1;
  d3.ShowDist();

  Distance d4 = Distance(-1, -1);
  Distance d5 = Distance(-1,-10);
  Distance d6 = d4 + d5;
  d6.ShowDist();
  d6 = d5 - d4;
  d6.ShowDist();

  
  return 0;
}