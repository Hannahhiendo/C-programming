#include <iostream>
#define PI 3.14159
using namespace std;



int main()
{
    double radius;
    double lengthOfCylinder;
    cout << "Enter the radius: " ;
    cin >> radius;
    cout <<"Enter length of cylinder: " ;
    cin >> lengthOfCylinder;

    double area = radius * radius *  PI;
    double volume = area * lengthOfCylinder;

    cout << "The volume is "<< volume << '\n';
    cout << "The area is " << area << '\n';





}
