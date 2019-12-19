// countpp3.cpp
// increment counter variable with ++ operator
// uses unnamed temporary object
#include <iostream>
#include "distance.h"

void Distance::ShowDist() const{
    std::cout << feet() << "\'" << inches() << "\"" << std::endl;
}

Distance Distance::operator +(Distance &rhs) const{
    float inchesTmp = inches_ + rhs.inches();
    int feetTmp =static_cast<int>(inchesTmp / 12);
    inchesTmp -= 12 * feetTmp;

    return Distance (feet_ + rhs.feet() + feetTmp, inchesTmp);
}

std::ostream& operator <<(std::ostream& os, const Distance distance){
  os << distance.feet() << " feet " << distance.inches() << " inches";
  
  return os;
}