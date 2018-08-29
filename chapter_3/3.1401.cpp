#include <iostream>
#include <cmath>
using namespace std;

int main() {

cout << "Enter the tempurature in Fahranheit " << '\n';
double tempurature;
cin >> tempurature;
cout << "Enter the wind speed in miles per hour " << '\n';
double windSpeed;
cin >> windSpeed;

double windChillIndex = 35.74 + 0.6215 * tempurature - 35.75 * pow(windSpeed , 0.16) + 0.4275 * tempurature * pow(windSpeed , 0.16);


if(windSpeed < 2){
    cout << "Wind Speed is invalid" << '\n';
}
else if(tempurature < -58 || tempurature > 41){
    cout << "Tempurature is invalid" << '\n';
}

else{
cout << "The wind - chill Index is " << windChillIndex << '\n';
}

return 0;
}
