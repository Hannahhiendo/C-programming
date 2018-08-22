#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main ()
{
    cout << "Enter the length of one side of a hexagon: ";
    double lengthOfSide;
    cin >> lengthOfSide;

    double area = 3 * 1.732 / 2 * pow(lengthOfSide, 2);
    cout << area << '\n';


    return 0 ;

}