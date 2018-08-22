#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "Enter investment amount: "<< '\n';
    double investmentAmount;
    cin >> investmentAmount;
    cout << "Enter anual interest rate: "<< '\n';
    double annualInterestRate;
    cin >> annualInterestRate;
    cout  << "Enter number of years: "<<'\n';
    double numberOfYears;
    cin >> numberOfYears;
    double monthlyInterestRate = annualInterestRate/12;
    monthlyInterestRate = monthlyInterestRate/100;

    
   
    
    double accumulatedValue = investmentAmount * pow(1 + monthlyInterestRate, numberOfYears * 12);

    cout << "The Accumulated Value is $"<< accumulatedValue << '\n'; 

    

 
    return 0;


}