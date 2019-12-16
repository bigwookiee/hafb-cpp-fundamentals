#include <iostream>

using namespace std;

/* 
    BMI in meters and kilgrames.
    weight(kg) / [Height(m)]^2
*/

const float kMetersToInch = 39.37;
const float kKiloToLbs = 2.204;
const int kBMIImperial = 703;
const float lowBmi = 18.5;
const float hiBmi = 24.9;

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
    
    hight *= kMetersToInch;
    weight *= kKiloToLbs; 
    bmi = (weight * kBMIImperial)/(hight*hight);
    cout <<"In (imperal) your BMI is: " << bmi << ".  It's a lieeee!!!!" << endl;
    
    if(bmi >= lowBmi && bmi < hiBmi) {
        cout << "Your Bmi is good and between " << lowBmi << " and " << hiBmi << "." << endl;
    } else {
        if (bmi < lowBmi){
            cout << "Your bmi is bellow " << lowBmi << ".  You should eat more candy!" << endl;
        }
        else {
            cout << "Your bmi is above " << hiBmi << ".  You should stop eating candy!" << endl;
        }
    }

    cout << "Thanks for using BMI" << endl;

    return 0;
}