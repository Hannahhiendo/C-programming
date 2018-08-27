#include <iostream>
#include <math.h>
#include <cmath>
using namespace std; 

int main(){
    cout << "Enter a, b, c:";
    double a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    double r1 = (-b) + sqrt(pow(b, 2) - 4 * (a * c)) / (2 * a);
    double r2 = (-b) - sqrt(pow(b, 2) - 4 * (a * c)) / (2 * a);

    if (sqrt(pow(b, 2) - 4 * (a * c)) > 0){
        cout << "The roots are " << r1 << " and " << r2 << '\n';
    }
    
    else if (sqrt(pow(b, 2) - 4 * (a * c)) == 0){
        cout << "The root is " << r1 << '\n';
    }

    else {
        cout << "The equation has no real roots" << '\n';
    }

    return 0;
}