#include <iostream>
using namespace std;


int main()
{
    double gratuity, subtotal;
    cout << "Enter the subtotal and gratuity rate:";
    cin >> subtotal;
    cin >> gratuity;

    
    gratuity = gratuity/100;
    gratuity = gratuity * subtotal;
    double total = gratuity + subtotal;

    cout << "The gratuity is : $" << gratuity<< '\n';
    cout << "The total amount is: $" << total << '\n'; 
}