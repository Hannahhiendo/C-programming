#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main (){
    srand(time (0));
    int lottery = rand() % 100;
    

    cout << "Enter your lottery pick (two digits)" << '\n';
    int guess;
    cin >> guess;

    int lotteryDigit1 = lottery / 10;
    int lotteryDigit2 = lottery % 10;

    int guessDigit1 = guess / 10;
    int guessDigit2 = guess % 10;

    if(guess == lottery){
        cout << "Exact match : you win $10,000" << '\n';
    }

    else if (guessDigit1 == lotteryDigit2 && guessDigit2 == lotteryDigit1){
        cout << "All digits matched : you win $3,000" << '\n';
    }

    else if (guessDigit1 == lotteryDigit1 || guessDigit1 == lotteryDigit2 || guessDigit2 == lotteryDigit1 || guessDigit2 == lotteryDigit2){
        cout << "One digit matched : you win $1000" << '\n';
    }
    
    else {
        cout << "no match, thanks for playing" << '\n';
    }
 
 
 
    return 0;
}