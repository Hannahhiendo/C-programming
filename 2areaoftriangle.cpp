#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main()
{
cout << "Enter three points for a triangle: ";
double x1, x2, y1, y2, x3, y3;
cin >> x1;
cin >> y1;
cin >> x2;
cin >> y2;
cin >> x3;
cin >> y3;


double side1, side2, side3;
side1 = sqrt(pow(x2 - x1, 2) + pow(y1 - y2, 2));
side2 = sqrt(pow(x3 - x1, 2) + pow (y1 - y3, 2));
side3 = sqrt(pow(x2 - x3, 2) + pow (y2 - y3, 2));

double s = (side1 + side2 + side3) / 2;
double area = sqrt(s * (s - side1) * (s - side2) * (s - side3));

cout << "The Area is: " << area << '\n';



return 0;




}










