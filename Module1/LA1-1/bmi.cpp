#include <iostream>

using namespace std;

/* 
    BMI in meters and kilgrames.
    weight(kg) / [Height(m)]^2
*/

const float kMetersToInch = 39.37;
const float kKiloToLbs = 2.204;
const int kBMIImperial = 703;

int main(){
    float hight = 0;    // In meters
    float weight = 0;   // In kg
    float bmi = 0;      // in kg/m^2
    
    cout << "what is your height? (in meters) ";
    cin >> hight;
    cout << "what is your weight? (in Kg) ";
    cin >> weight;
    bmi =  weight / (hight * hight);
    cout << "Your BMI is: " << bmi << ".  You need to get off your ass." << endl;
    weight *= kMetersToInch;
    hight *= kKiloToLbs; 
    bmi = (weight * kBMIImperial)/(hight*hight);
    cout <<"In (imperal) your BMI is: " << bmi << ".  It's a lieeee!!!!" << endl;
    
    return 0;
}