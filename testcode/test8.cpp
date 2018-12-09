#include <iostream>
using namespace std;

int main(){
    cout << "Enter a fahrenheit"<< '\n';
    int fahrenheit;
    cin >> fahrenheit;
    int celsius;
    celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
    cout << celsius;

    return 0;
}