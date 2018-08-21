#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{

int income = 10500;
double tax;

if ( income <= 10000)
    tax = income * 0.1;
else if (income > 10000 && income <= 20000)
    tax = 1000 + (income - 10000) * 0.15;

cout << tax << '\n';

return 0;
}