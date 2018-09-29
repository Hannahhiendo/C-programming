#include <iostream>
#include <bitset>
#include <iomanip>
using namespace std;

int main() {
    const int numbersPrime = 50;
    const int numbersPerLine = 10;
    std ::bitset<10000000> bits;
    int size = 10000000;
    

    for(int i = 2; i <= size/2 + 2; i++){
        for(int j = 2; i * j < size; j++){
            bits.set(i * j , 1) ;
        }
    }

    for(int k = 2; k <= 1000; k++){
        if(bits[k] == 0){
            cout << k << '\t';
        }
    }
    
   return 0;
}

