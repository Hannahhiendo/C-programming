#include <iostream>
using namespace std;

int main() {

cout << "Enter an integer: " << '\n';
int integer;
cin >> integer;

cout << "Is " << integer << " divisible by 5 and 6:";
if(integer % 5 == 0   && integer % 6 == 0){
    cout << " true" << '\n';
}
else {
    cout << " false" << '\n';
}


cout << "Is " << integer << " divisible by 5 or 6:";
if(integer % 5 == 0 || integer % 6 == 0){
    cout << " true" << '\n';
}
else {
    cout << " false" << '\n';
}

cout << "Is " << integer << " divisible by 5 or 6, but not both?:";
if(((integer % 5 == 0) || (integer % 6 == 0)) && (!(integer % 5 == 0) && (integer % 6 == 0))) {
    cout << " true" << '\n';
}
else {
    cout << " false" << '\n';
}

return 0;

}