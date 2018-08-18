#include <iostream>
using namespace std;

int main ()
{
cout << "Enter starting velocity:  ";
    double startingVelocity;
    cin >> startingVelocity;
cout << "Enter ending velocity: ";
    double endingVelocity;
    cin >> endingVelocity;
cout << "Enter Time Span: ";
    double timeSpan;
    cin >> timeSpan;
double averageAcceleration = (endingVelocity - startingVelocity) / timeSpan;

 cout << "The Average Acceleration is " << averageAcceleration << '\n';

return 0;

}