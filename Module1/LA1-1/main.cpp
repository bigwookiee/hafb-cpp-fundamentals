#include <iostream>
using namespace std;

int main() {
    unsigned int age;
    // comits are junk don't use tham.
    cout << "Hello all" << endl;
    cout << "Becase I can" << " and I want too" << endl;

    cout << "Age? " ;
    cin >> age;
    if (age > 20) {
        cout << "your age is: " << age << ". You ARE VERY OLD!!!" << endl;
    }
    else
    {
        cout << "your age is: " << age << ". You ARE VERY Young!!!" << endl;
    }
        
    
    return 0;
    // All hail clean code!!
 }