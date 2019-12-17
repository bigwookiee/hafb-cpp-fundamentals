#include "age.h"
#include <iostream>

using namespace std;

void ByValueAgeIn5Years(int age){
    cout << "Your age is " << age << " years old. You will be " << age + 5 << " in 5 Years." << endl;
}

void ByReferenceAgeIn5Years(int& age){
    age += 5;
}

int CurrentAge(int age){
    return age;
}