#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "Enter the tempurature in Fahranheit: ";
    double degreesFahrenheit;
    cin >> degreesFahrenheit;
    cout << "Enter the wind speed miles per hour: ";
    double windSpeed;
    cin >> windSpeed;

    double windChillIndex = 35.74 + 0.6215 * degreesFahrenheit - 35.75 * pow(windSpeed,0.16) + 0.4275 * degreesFahrenheit * pow(windSpeed, 0.16);

    cout << "The wind-chill index is " << windChillIndex << '\n';

    return 0;


}