#include <iostream>
using namespace std;

int main()
{
      
    void reverse(int n);
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    
    cout << "Reversed Number = " ;
    reverse(n);
 return 0;
}

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