#include <iostream>
using namespace std;

int main()
{
    bool b = true;
    int i = b;
    i = 1;
    b = i;



    cout << b << '\n' << i << '\n';

    return 0;
    }