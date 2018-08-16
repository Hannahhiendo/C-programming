#include <iostream>
using namespace std; 

int main()
{
    cout << "Enter an integer ";
    int n;
    cin >> n;

    int total = 0;

    for (int i = 1; i < n + 1 ; i ++){

        total = total + i;

    }

    cout << total << '\n';
}

