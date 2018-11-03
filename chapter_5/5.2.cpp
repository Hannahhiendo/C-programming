#include <iostream>
using namespace std;

int main(){

int sumOfDigits(int n);
int n;
cout << "Enter a 3 digit number:";
cin >> n;
cout << sumOfDigits(n)<< '\n';

return 0;

}



int sumOfDigits(int n){
    int ones = n % 10;
    int tens = n /10;
    tens = tens % 10;
    int oneHundred = n /100;
    int sumOfDigits = ones + tens + oneHundred;

return sumOfDigits;
}

