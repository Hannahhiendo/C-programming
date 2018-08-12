#include <iostream>
using namespace std;

int main ()
{
    int totalSeconds = time(0);
    int totalMinutes = totalSeconds/60;
    int currentMinutes = totalMinutes % 60;
    int totalHours = totalMinutes/60;
    int currentHour = totalHours % 60;
    cout << currentHour << '\n';


}