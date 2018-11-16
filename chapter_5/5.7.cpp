#include <iostream>
using namespace std;

int main(){

    double celsius;
    double celsiusToFahrenheit(double celsius);
    cout << "Enter the temperature in Celsius : ";
    cin >> celsius;
    
    
    cout << "The temperature in Fahrenheit : " <<  celsiusToFahrenheit(celsius)<< endl;
    return 0;
}


double celsiusToFahrenheit(double celsius){
    double fahrenheit;
    fahrenheit = (celsius * 9.0) / 5.0 + 32;
    return fahrenheit;
}