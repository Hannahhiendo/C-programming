#include <iostream>
using namespace std;

int main() {

cout << "Enter first integer:";
int n1;
cin >> n1;

cout << "Enter second integer:";
int n2;
cin >> n2;

int k = 2;
int gcd = 1;
while(k <= n1 && k <= n2){
    if (n1 % k == 0 && n2 % k == 0)
        gcd = k;
    k++;
}

cout << "The greatest common divisor for " << n1 << " and " << n2 << " is " << gcd << '\n';

return 0;
}

