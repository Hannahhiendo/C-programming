#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double monthlyPayment = 1345.4567;
    double totalPayment = 866.887234;

    cout << setprecision(7);
    cout << monthlyPayment << '\n';
    cout << totalPayment << '\n';
    
    cout << fixed << setprecision(2) ;
    cout << setw(8) << monthlyPayment << '\n';
    cout << setw(8) << totalPayment << '\n';



return 0;
}