#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    cout << "Enter weight in pounds: ";
    double weightInPounds;
    cin >> weightInPounds;
    cout << "Enter height in inches: ";
    double heightInInches;
    cin >> heightInInches;

    double weightInKilograms = weightInPounds * 0.45359237 ;
    double heightInMeters = heightInInches * 0.0254;

    heightInMeters = pow(heightInMeters, 2);
    double bodyMassIndex = weightInKilograms / heightInMeters;


    cout << "BMI is " << bodyMassIndex << '\n';

    return 0;




}