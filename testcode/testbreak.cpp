#include <iostream>
using namespace std;

int main(){

int sum = 0;
int number = 0;

while (number < 20){
    number ++;
    sum += number;
    if (sum >= 100)
        break;
}

cout << "The number is " << number << '\n';
cout << "The sum is " << sum << '\n';

return 0;

}