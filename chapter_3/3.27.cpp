#include <iostream>
#include <iomanip>
using namespace std;

int main (){

    double number = 93123.1234567;
    cout << setw(10)  << setprecision(5) << number << '\n';
    cout << setw(10) << setprecision(4) << number << '\n';
    cout << setw(10) << setprecision(3) << number << '\n';
    cout << setw(10) << setprecision(8) << number << '\n';

return 0;

}