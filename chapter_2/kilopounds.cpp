#include <iostream>
using namespace std;

int main()
{
    double pound;
    cout << "Enter a number in pounds: " ;
    cin >> pound ;

    double kilogram = pound * 0.454;
    cout << "There are " << kilogram << " kilograms in " << pound << " pounds"<< '\n';

}