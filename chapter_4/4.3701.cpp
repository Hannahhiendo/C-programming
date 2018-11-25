#include <iostream>
using namespace std;

double caculateComission(double salesAmount){
   

    if(salesAmount > 0.01 && salesAmount <= 5000){ 
        return salesAmount * 0.08;
    }

    if(salesAmount > 5000 && salesAmount <= 10000){
        return salesAmount * .1;
    }

    if(salesAmount > 10000){
        return salesAmount * .12;
    }

}


int main(){
double salesAmount = 10000;


cout << caculateComission(salesAmount) << '\n';

}