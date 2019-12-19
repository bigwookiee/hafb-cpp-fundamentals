// countpp3.cpp
// increment counter variable with ++ operator
// uses unnamed temporary object
#include <iostream>
#include "distance.h"

void Distance::ShowDist() const
{
    std::cout << feet() << "\'" << inches() << "\"" << std::endl;
}

Distance Distance::operator+(Distance &rhs) const
{
    float inchesTmp = inches_ + rhs.inches();
    int feetTmp = static_cast<int>(inchesTmp / 12);
    inchesTmp -= 12 * feetTmp;

    while (inchesTmp < 0)
    {
        inchesTmp *= -1;
    }

    return Distance(feet_ + rhs.feet() + feetTmp, inchesTmp);
}

 Distance operator - (Distance lhs, Distance rhs){
     int ft = lhs.feet_ - rhs.feet_;
     float in = 0;

     if(lhs.inches_ < rhs.inches_)
     {
         ft -= 1;
         in = (lhs.inches_ + 12) - rhs.inches_;
     }
     return Distance(ft,in);
 }

// Distance Distance::operator-(Distance &rhs) const
// {
//     float inchesTmp = inches_ - rhs.inches();
//     int feetTmp = static_cast<int>(inchesTmp / 12);
//     inchesTmp += 12 * feetTmp;

//     while (inchesTmp < 0)
//     {
//         inchesTmp *= -1;
//     }

//     return Distance(feet_ - rhs.feet() - feetTmp, inchesTmp);
//}

bool Distance::operator<(Distance &rhs) const
{
    return feet_ < rhs.feet() || (feet_ == rhs.feet() && inches_ < rhs.inches());
}

bool Distance::operator==(Distance &rhs) const
{
    return (static_cast<float>(feet_) + inches_ / 12) == (static_cast<float>(rhs.feet()) + rhs.inches() / 12);
}

std::ostream &operator<<(std::ostream &os, const Distance distance)
{
    os << distance.feet() << " feet " << distance.inches() << " inches";

    return os;
}

Distance Distance::operator = (Distance &rhs){
    std::cout << "Assignment operator invoked!" << std::endl;
    feet_ = rhs.feet_;
    inches_ = rhs.inches_;
    return Distance(feet_, inches_);
}

Distance::Distance(const Distance &distance) {
    std::cout << "Copy Const" << std::endl;
    feet_ = distance.feet_;
    inches_ = distance.inches_;

}