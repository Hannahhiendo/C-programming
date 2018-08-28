#include <iostream>
using namespace std;

int main(){
    cout << "Enter three integers";
    double num1, num2, num3;
    cin >> num1;
    cin >> num2;
    cin >> num3;


    if(num1 > num2){
        int temp = num2;
        num2 = num1;
        num1 = temp;
    }
    if(num1 > num3){
        int temp = num3;
        num3 = num1;
        num1 = temp;
    } 

       if(num2 > num3){
        int temp = num2;
        num2 = num3;
        num3 = temp;
    }
   

    cout << num1 << " " << num2 << " " <<  num3 << '\n';


return 0;

}