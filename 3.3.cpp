#include <iostream>
#define PI 3.14159
using namespace std;

int main ()

{
    int radius = 5;
    double area;

    if (radius >= 0 )
    {
        area = radius * radius * PI;
        cout << area << '\n';
    }

    return 0;
}