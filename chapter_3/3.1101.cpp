#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {

cout << "Heads or Tails? (Heads = 1 , Tails = 0):" << '\n';
int guess;
cin >> guess;

int coinSide = rand() % 2 ;

if(coinSide == guess ){
    cout << "Your guess is correct" << '\n';
}
else {
    cout << "Your guess is incorrect" << '\n';
}

return 0;

}