/**
 * @file arrays.cpp
 * @author your name (you@domain.com)
 * @brief arrays and containers.
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int const kMaxGrades = 5;

int main()
{
    int grades[kMaxGrades][kMaxGrades] = {
        {0, 10, 20},
        {14,4},
        {0},
        {0},
        {0}
    };
    int avg = 0;
    
    //cout << "Enter " << kMaxGrades << " grades" << endl;


    for (int col = 0; col < kMaxGrades; ++col){
        for(int row = 0; row <kMaxGrades; ++row) {
            cout << '[' << col << "][" << row << "] : " << "  " << grades[col][row] << endl;
            // cout << "enter grade " << count + 1 << ": "; 
            // cin >> grades[count]; 
        }
    }

    // for (int count = 0; count < kMaxGrades; ++count){
    //     avg += grades[count];
    // }

  // cout << "avg: " << static_cast<float>(avg / kMaxGrades) << endl;
    return 0;
}


