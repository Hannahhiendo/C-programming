#include <iostream>
using namespace std;

int main ()
{
    int totalseconds = time(0);
    int totalminutes = totalseconds/60;
    int currentminutes = totalminutes % 60;
    int totalhour = totalminutes/60;
    int currenthour = totalhour % 60;
    cout << currenthour << '\n';


}