/**
 * @file age.cpp
 * @author lower case g god King of code(you@domain.com)
 * @brief Print users rights based on age.
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright 
 * 
 */

#include <iostream>

using namespace std;

int main(){
    int age;
    cout << "Enter your age? ";
    cin >> age;
    
    /*
    *   task display rights by age:
    *   If your are under 18, must go to school.
    *   If your are over 18, you can vote.
    *   If your are over 21, you can buy alchol.
    *   If your are over over 65, you can retire.
    */
    
   switch(age){
       case 65 ... 150:
            cout << "You can retire." << endl;
        case 21 ... 64:
            cout << "You can buy alchool" << endl;
        case 18 ... 20:
            cout << "You can vote." << endl;
   }

   if (age <= 18 ){
       cout << "you must go to school" << endl;
   }

    return 0;
}