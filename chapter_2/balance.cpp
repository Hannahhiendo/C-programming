#include <iostream>
using namespace std;

int main()
{
    cout << "Enter balance and anual interest rate: ";
    double balance;
    double anualInterestRate;
    cin >> balance;
    cin >> anualInterestRate ;

    double interest = balance * (anualInterestRate/1200);
    cout << "The interest for next month will be $" << interest << '\n';

 
    return 0;


}