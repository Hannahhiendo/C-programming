#include <iostream>
using namespace std;

int main(){

int getPentagonNumber(int n);
for(int n = 1; n <= 100; n++){
cout << getPentagonNumber(n)<<'\n';
}

}



int getPentagonNumber(int n){
    
        
        int getPentagonNumber = 0;
        getPentagonNumber = n*(3 * n-1)/2;
        return getPentagonNumber;
        
}