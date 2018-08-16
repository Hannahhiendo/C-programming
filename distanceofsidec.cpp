#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main ()
{

    cout << "Enter two points: ";
    double x1, x2, y1, y2;
    cin >> x1;
    cin >> y1;
    cin >> x2;
    cin >> y2;

    long double c = sqrt( pow(x1 - x2 , 2) + pow(y1 - y2 , 2));
    cout << "The distance of the two points is " << c << '\n';
    return 0;

}