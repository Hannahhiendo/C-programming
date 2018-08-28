#include <iostream>
using namespace std;


int main(){

cout << "Enter an amount in double: ";
double amount;
cin >> amount;

int remainingAmount =  static_cast<int> (amount * 100);

int amountOfDollars = remainingAmount / 100;
remainingAmount = remainingAmount % 100;

int amountOfQuarters = remainingAmount / 25;
remainingAmount = remainingAmount % 25;

int amountOfDimes = remainingAmount / 10;
remainingAmount = remainingAmount % 10;

int amountOfNickels = remainingAmount / 5;
remainingAmount = remainingAmount % 5;

int amountOfPennies = remainingAmount ;



cout << "Your amount " << amount << " consists of " << '\n' ;

if (amountOfDollars == 1 ){
    cout << amountOfDollars << " Dollar"<< '\n';
      
}
else {
    cout << amountOfDollars << " Dollars" << '\n';
}

if (amountOfQuarters == 1 ){
    cout << amountOfQuarters << " Quarter"<< '\n';
}
else {
    cout << amountOfQuarters << " Quarters" << '\n';
}

if (amountOfDimes == 1 ){
    cout << amountOfDimes << " Dime"<< '\n';
}
else {
    cout << amountOfDimes << " Dimes" << '\n';
}

if (amountOfNickels == 1 ){
    cout << amountOfNickels << " Nickel"<< '\n';
}
else {
    cout << amountOfNickels << " Nickels" << '\n';
}

if (amountOfPennies == 1 ){
    cout << amountOfPennies << " Penny"<< '\n';
}
else {
    cout << amountOfPennies << " Pennies" << '\n';
}






return 0;
}