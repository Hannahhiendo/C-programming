#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    cout << "Enter airplane take off speed and airplane acceleration: ";
    double airplaneTakeoffSpeed;
    cin >> airplaneTakeoffSpeed;
    double airplaneAcceleration;
    cin >> airplaneAcceleration;
   

    double minimumRunwayLength = pow (airplaneTakeoffSpeed,2) / (2 * airplaneAcceleration);

    cout << "The minimum runway length for this airplane is " << minimumRunwayLength << '\n';




return 0;



}