#include <iostream>
using namespace std;

int main () 
{

cout << "Enter in a positive integer: ";
int number;
cin >> number;
bool even = number % 2 == 0;

cout << even << '\n' ;

return 0;

}