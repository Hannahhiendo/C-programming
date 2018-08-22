#include <iostream>
using namespace std;

int main()
{
    double annualInterestRate = 5;
    annualInterestRate = annualInterestRate / 100;
    double monthlyInterestRate = annualInterestRate / 12;

    double currentAmount = 0;
    int a = 1;
    for (a =1; a<7; a++) {
    currentAmount = (100 + currentAmount) * (1 + monthlyInterestRate);
   
  }

   cout << currentAmount << '\n';

   return 0;

    
}