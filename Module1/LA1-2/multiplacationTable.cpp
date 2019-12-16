/**
 * @file multiplacationTable.cpp
 * @author your name (you@domain.com)
 * @brief table of Multiplication data.
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int const kMaxNumer = 12;

int main(){
    int maxXVale = 0;
    int maxYVale = 0;

    cout << "enter a number between 0 and " << kMaxNumer << "?: " ;
    cin >> maxXVale; 
    cout << "enter a second between 0 and " << kMaxNumer << "?: " ;
    cin >> maxYVale; 

    cout <<  "...| ";

    for(int numOne = 0; numOne <= maxXVale; ++numOne) {
        cout << setw(4) << numOne;
    }
    
    cout << endl;
    for(int numOne = 0; numOne <= maxXVale + 1; ++numOne){
        cout << "----";
    }

    cout << "-" << endl;

    for(int numOne = 0; numOne <= maxXVale; ++numOne) {
        cout << setw(4) << numOne << '|';
        for (int numTwo = 0; numTwo <= maxYVale; ++numTwo) {
            cout << setw(4) << numOne * numTwo;
        }
        cout << endl;
    }

    return 0;
}