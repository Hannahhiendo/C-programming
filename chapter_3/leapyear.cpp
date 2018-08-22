#include <iostream>
using namespace std;

int main (){

cout << "Enter a year: ";
int year;
cin >> year;

bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

if (isLeapYear){
    cout << year << " is a leap year\n";
}

else {
    cout << year << " is not a leap year\n";
}


return 0;
}