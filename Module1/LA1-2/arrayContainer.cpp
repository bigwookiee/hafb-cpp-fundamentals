/**
 * @file arrayContainer.cpp
 * @author your name (you@domain.com)
 * @brief Containerised arrays.
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#include <iostream>
#include <iomanip>
#include <array>
#include <cmath>

using namespace std;

int main(){
    array<double, 5> grades {1,2,3,4,5};

    cout << "size of array is? " << grades.size() << "." << endl;
    for (int index = 0; index < grades.size(); ++index) {
        cout << grades[index] << endl;
    }

    cout << "for each" << endl;
    for(auto grade : grades) {
        cout << grade << endl;
    }

    return 0;
}
