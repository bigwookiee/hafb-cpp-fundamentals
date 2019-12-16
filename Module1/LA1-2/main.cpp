/**
 * @file main.cpp
 * @author HasNothingToLose  (HasNothingToLose@hillbily.com)
 * @brief Global vs Local vars.
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#include <iostream>
using namespace std;

int global_var = 1000; // global very bad

int main() {
    int global_var = 2000; // 
    cout << "Local " << global_var << endl;
    cout << "Global " << ::global_var << endl;

    return 0;
}