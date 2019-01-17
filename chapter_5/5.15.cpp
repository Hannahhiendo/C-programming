#include <iostream>
using namespace std;


int numberOfDaysInAYear(int year);
int numberOfDaysInLeapYear(int leap);

int main(){

    for(int year = 2000; year <= 2010; year++){
      
        if(year/4 != 0){
            int leap;
            cout << year << '\t' << numberOfDaysInLeapYear(leap) << '\n';
        }
        
        else{
            cout << year << '\t' << numberOfDaysInAYear(year) << '\n';
        }
    }
}
int numberOfDaysInAYear(int year){
     return 356;
 
}
int numberOfDaysInLeapYear(int leap){
    return 366;
}