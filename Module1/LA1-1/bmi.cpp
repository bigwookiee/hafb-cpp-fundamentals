#include <iostream>

using namespace std;

/* 
    BMI in meters and kilgrames.
    weight(kg) / [Height(m)]^2
*/

int main(){
    float hight = 0;    // In meaters
    float weight = 0;   // In Kg
    float bmi = 0;      // kg/m^2
    
    cout << "what is your height? ";
    cin >> hight;
    cout << "what is your weight? ";
    cin >> weight;
    bmi =  weight / (hight * hight);
    cout <<"Your BMI is: " << bmi << ".  You need to get off your ass.";

    return 0;
}