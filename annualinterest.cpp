#include <iostream>
#include <cmath>
using namespace std;

int main()
{
cout << "Enter Investment Amount: ";
double investment;
cin >> investment;
cout << "Enter Annual Interest Rate: ";
double annualInterestRate;
cin >> annualInterestRate;
annualInterestRate = annualInterestRate / 100;

cout << "Enter Number of Years: ";
double numberOfYears;
cin >> numberOfYears;

double total = investment * pow(1 + annualInterestRate, numberOfYears);

cout << total << '\n';

return 0;
}