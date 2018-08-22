#include <iostream>
using namespace std;

int main ()
{
    int x = 2;
    int y = 2;
    int z = x + y;

    if ( x > 2) {
        if( y > 2) {
            cout << "z is "<< z << '\n';
        }
    } else {
        cout << "x is " << x << '\n';
    }

 return 0;
}