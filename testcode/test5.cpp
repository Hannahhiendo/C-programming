#include <iostream>
using namespace std;

int gcd(int n1, int n2)
{
    int gcd = 1;
    int k = 2;

    while(k <= n1 && k <= n2){
        if(n1 % k == 0 && n2 % k == 0){
            gcd = k;
        }
    k++;
    }
    
    return gcd;
}

int main(){
    cout << "Enter the first integer:" ;
    int n1;
    cin >> n1;

    cout << "Enter the second integer:" ;
    int n2;
    cin >> n2;
    
    cout << " The greatest common divisor for" << n1 << " and " << n2 << " is " << gcd(n1,n2) ;

return 0;
}