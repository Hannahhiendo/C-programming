#include <iostream>
#include <iomanip>
#include <unistd.h>

using namespace std;


int main (){
    cout << "Multiplication Table\n" ;
    cout << "-----------------------------\n";

    cout << " | ";
    for (int j = 1; j <= 9; j++)
        cout << setw(3) << j ;
        cout << "\n";

    for (int i = 1; i <= 2; i++)
    {

        cout << i << " | ";
        for ( int j = 1; j <= 5; j++){
            usleep(1000000);
            cout << setw(3) << i * j;
        }
        cout << "\n";
    }
    return 0;
}