#include <iostream>

using namespace std;

/* 
    BMI in meters and kilgrames.
    weight(kg) / [Height(m)]^2
*/

int main(){
    float hight = 0;    // In meters
    float weight = 0;   // In kg
    float bmi = 0;      // in kg/m^2
    
    cout << "what is your height? (in meters) ";
    cin >> hight;
    cout << "what is your weight? (in Kg) ";
    cin >> weight;
    bmi =  weight / (hight * hight);
    cout <<"Your BMI is: " << bmi << ".  You need to get off your ass.";

    return 0;
}