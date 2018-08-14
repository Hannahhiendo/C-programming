#include <iostream>
using namespace std;


int main()
{

    char uppercase;
    cout << "Enter an uppercase letter: ";
    cin >> uppercase;
    uppercase = int(uppercase);

    int offset = 'a' - 'A';
    char lowercase = (char)( uppercase + offset);

    cout << "The lowercase letter of " << uppercase << " is " << lowercase << '\n';

    return 0;
   
    
}