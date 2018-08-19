#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    cout << "Enter yearly interest rate: "<<'\n';
    double annualInterestRate;
    cin >> annualInterestRate;
    cout << "Enter loan amount: "<<'\n';
    double loanAmount;
    cin >> loanAmount;
    cout  << "Enter number of years: "<<'\n';
    double numberOfYears;
    cin >> numberOfYears;

    double monthlyInterestRate = annualInterestRate / 1200;
    double monthlyPayment = loanAmount * monthlyInterestRate / (1 - 1 / pow( 1 + monthlyInterestRate, numberOfYears * 12));
    double totalPayment = monthlyPayment * numberOfYears * 12;

    cout << "The monthly payment is " << monthlyPayment << "\nThe total payment is " << totalPayment << '\n';



    return 0;

}