/**
 * @file mySquares.cpp
 * @author your name (you@domain.com)
 * @brief Print multiple squares.
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#include <iostream>
#include <cmath>
#include <iomanip>  //Format output.

using namespace std;

int main() {

    cout << "NUMBER      SQUARE ROOT" << endl;
    cout << "------      -----------" << endl;
    cout << setiosflags(ios::showpoint);
    
    cout << setw(4) << 81 << setw(19) << sqrt(81) << endl;

    for(int count = 10; count > 0; --count) {
        cout << setw(4) << count << setw(19) << sqrt(count) << endl;
    }

    return 0;
}