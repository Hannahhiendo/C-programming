#include <iostream>
#include <math.h>  
using namespace std;


int main()
{

    int integer;
    cout << "Enter an interger from 0 - 1000: ";
    cin >> integer;


    int uno = integer % 10;
    int natural = integer % 100;
    int dos = floor(natural/ 10);
    int tres = floor(integer/100);

    int total = uno + dos + tres;
    cout << "The sum of the digits is " << total<< '\n';

    return 0;
}