/**
 * @file case.cpp
 * @author your name (you@domain.com)
 * @brief Multiple IF - Statement and Case
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#include <iostream>
using namespace std;

int main() {
    char code;
    cout << "Enter code: ";
    cin >> code;

    // if (code == 'S'){
    //     cout << "The item is space exploration grade." << endl;
    // }

    switch (code)
    {
        case 'S':
        case 's':
            cout << "The item is space exploration grade." << endl;
            break;
        
        case 'M':
        case 'm':
            cout << "The item is space exploration grade." << endl;
            break;
        
        case 'C':
        case 'c':
            cout << "The item is civilane grade." << endl;
            break;
        
        case 'T':
        case 't':
            cout << "The item is toy exploration grade." << endl;
            break;
        
        default:
            cout << "In Default" << endl;
    }

    return 0;
}
