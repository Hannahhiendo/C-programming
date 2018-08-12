#include <iostream>
using namespace std;

int main(){

    int sign = -1;
    double result = 1;


    for (int a = 3;a < 10000;  a = a + 2) {
        result = result + ( sign * 1.0/a);
        sign = sign * ( -1);

    } 

cout << result * 4 << '\n';
}



