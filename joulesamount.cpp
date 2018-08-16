#include <iostream>
using namespace std;

int main()
{
cout << "Enter the amount of water in kilograms: ";
double weightOfWater;
cin >> weightOfWater;
cout << "Enter the initial tempurature in Celsius: ";
double initialTempurature;
cin >> initialTempurature;
cout << "Enter the final tempurature in Celsius: ";
double finalTempurature;
cin >> finalTempurature;

double energyAmount = weightOfWater * (finalTempurature - initialTempurature) * 4184;

cout << "The energy needed is " << energyAmount << "joules" << '\n';

return 0;

}
