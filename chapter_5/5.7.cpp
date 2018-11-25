#include <iostream>
using namespace std;


    double fahrenheitToCelsius(double fahrenheit);
    double celsiusToFahrenheit(double celsius);
int main(){
    
      double celsius = 40;  
      double fahrenheit = 120;

cout<< "celsius" <<'\t'<< "fahrenheit"  << '\t' << "fahrenheit" <<'\t'<< "celsius"<< '\n';

for(int n = 1; n <= 10; n++){
    cout << celsius << "\t";
    cout << celsiusToFahrenheit(celsius)<< "\t" << '\t'; 

    cout << fahrenheit << "\t";
    cout << '\t' << fahrenheitToCelsius(fahrenheit) << "\n";  
    celsius = celsius - 1;
    fahrenheit = fahrenheit - 10;
    
    }
    return 0;

}

double fahrenheitToCelsius(double fahrenheit){
    double
    celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
    return celsius;

}

double celsiusToFahrenheit(double celsius){
    double
    fahrenheit = (celsius * 9.0) / 5.0 + 32;
    return fahrenheit;
}