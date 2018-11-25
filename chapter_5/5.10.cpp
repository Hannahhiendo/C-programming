#include <iostream>
using namespace std;

double computerComission(double salesAmount){
    
    if(salesAmount<=0) {
        return 0;
    }

    if(salesAmount <= 5000){ 
        return salesAmount * 0.08;
    }

    if(salesAmount <= 10000){
        return salesAmount * .1;
    }

    return salesAmount * .12;
}

int main(){
double salesAmount = 10000;
double comission = 900;

cout << "Sales Amount" << '\t' << "Comission" << '\n'; 
for(int n = 1; n <= 20; n++){


cout << salesAmount << '\t' << '\t' << computerComission(salesAmount) << '\n';

salesAmount = salesAmount + 5000;
}

}
