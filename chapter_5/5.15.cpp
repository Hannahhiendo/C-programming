#include <iostream>
using namespace std;


int numberOfDaysInAYear(int year);

int main(){

    for(int year = 2000; year <= 2010; year++){
        cout << year << '\t' << numberOfDaysInAYear(year) << '\n';
    }
}

int numberOfDaysInAYear(int year){
    
    if(year/4 != 0){
        return 356;
    }
    if(year/4 == 0){
        return 366;
    }
}