#include <iostream>
using namespace std;

double feetToMeter(double feet){
    double meter = 0.305 * feet;
    return meter;
}
double meterToFeet(double meter){
    double feet = meter / 0.305;
    return feet;
}

int main(){
    double feet = 1.0;
    double meter = 20.0;

    cout << "Feet" << '\t' << "Meters" << "  " << "Meters" <<'\t'<< "Feet" << '\n';
    for(int n = 1; n <= 10; n++){
       

        cout << feet << '\t';
        cout << feetToMeter(feet) << '\t';

        cout << meter << '\t';
        cout << meterToFeet(meter) << '\n';

        feet = feet + 1;
        meter = meter + 5;
    }

    return 0;
}
