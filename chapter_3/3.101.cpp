#include <iostream>
#include <iomanip>
using namespace std; 

int main (){
    cout << "Enter a, b, c, d, e, f" << '\n';
    double a, b, c, d, e, f;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;
    cin >> f;


    double x = ((e * d) - (b * f)) / ((a * d) - (b * c));
    double y = ((a * f) - (e * c)) / ((a * d) - (b * c));


    if ((a * d) - (b * c) == 0){
        cout << "The equation has no solution" << '\n';
    }

    else {
        cout << setprecision(2) << "x is " << showpoint <<  x << " y is " << y << '\n';
    }

    return 0;

}