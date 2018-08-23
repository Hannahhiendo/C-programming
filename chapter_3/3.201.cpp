#include <iostream>
using namespace std; 

int main (){

    cout << "Enter an integer: ";
    int integer;
    cin >> integer;

    cout << "Is " << integer << " an even number? ";

    if (integer % 2 == 0){
        cout << "true" << '\n';
    }

    else {
        cout << "false" << '\n';
    }

return 0;
}