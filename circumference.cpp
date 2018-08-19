#include <iostream>
#define PI 3.14159
using namespace std;


int main ()
{
double radius;
cout << "Enter radius: ";
cin >> radius;

double circumference = radius * radius * PI;

cout << "The circumference is " << circumference << '\n';

return 0 ;

}
