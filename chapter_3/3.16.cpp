#include <iostream>
using namespace std; 

int main (){

    int num;
    cout << "Enter a number between 1 and 100" << '\n';
    cin >> num ;

    if (num < 100 && num < 0){
        cout << true << '\n';
    }

    else {
        cout << "This number is not between 1 and 100" << '\n';
    }
return 0;
}