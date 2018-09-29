#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int numbersPrime = 50;
    const int numbersPerLine = 10;
    int count = 0;
    int number = 2;
    cout << "the first 50 prime numbers are" << '\n';

while(count < numbersPrime){

    bool isPrime = true;

    for(int divisor = 2; divisor <= number / 2; divisor ++){
        if(number % divisor == 0){
            isPrime = false;
            break;
        }
    }

    if(isPrime){
        count ++;
        if(count % numbersPrime == 0){
        cout << setw(4) << number << '\n';
        }
        else{
        cout << setw(4) << number << '\t';
        }
    }
    number ++;
}
return 0; 
}









