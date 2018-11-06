#include <iostream>
using namespace std;



void reverse(int n){
 
   
   int reversedNumber = 0;
   int remainder;
    while(n != 0){
  
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }
    cout << reversedNumber << '\n';
    
}

int main()
{
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    
    cout << "Reversed Number = " ;
    reverse(n);
 return 0;
}