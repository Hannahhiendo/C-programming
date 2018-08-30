#include <iostream>
#include <math.h>
using namespace std;

int main() {
    cout << "Enter year: " << '\n';
    cout << "Enter month (1 - 12): "<< '\n';
    cout << "Enter the day of the month(1 - 31): "<< '\n';
    int yearK, monthM, dayOfTheMonthQ;
    cin >> yearK;
    cin >> monthM;
    cin >> dayOfTheMonthQ;


yearK = yearK % 100;
int centuryJ = yearK / 100;

    double floor; 
    
    double dayOfTheWeekH =(dayOfTheMonthQ + (26 * (monthM + 1) / 10) + 
    yearK + (yearK / 4) + (centuryJ / 4) + 5 * centuryJ ) % 7 ;

    if(dayOfTheWeekH == 0){
        cout << "The day of the week is Saturday";
    }
    if(dayOfTheWeekH == 1){
        cout << "The day of the week is Sunday";
    }
    if(dayOfTheWeekH == 2){
        cout << "The day of the week is Monday";
    }   
    if(dayOfTheWeekH == 3){
        cout << "The day of the week is Tuesday";
    }
    if(dayOfTheWeekH == 4){
        cout << "The day of the week is Wenesday";
    }
    if(dayOfTheWeekH == 5){
        cout << "The day of the week is Thursday";
    }
    if(dayOfTheWeekH == 6){
        cout << "The day of the week is Friday";
    }

return 0;

}
