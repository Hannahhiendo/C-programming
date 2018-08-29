#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main (){
    srand(time (0));
    int lottery = rand() % 100;
    

    cout << "Enter your lottery pick (three digits)" << '\n';
    int guess;
    cin >> guess;
    int lotteryDigit1 = lottery / 100;
    int lotteryDigit2 = lottery / 10;
    int lotteryDigit3 = lottery % 10;

    int guessDigit1 = guess / 100;
    int guessDigit2 = guess / 10;
    int guessDigit3 = guess % 10;

    if(guess == lottery){
        cout << "Exact match : you win $10,000" << '\n';
    }

    else if (guessDigit1 == lotteryDigit2 && guessDigit2 == lotteryDigit1 && guessDigit2 == lotteryDigit3 && guessDigit3 == lotteryDigit2 && guessDigit3 == lotteryDigit1 && guessDigit1 == lotteryDigit3 ){
        cout << "All digits matched : you win $3,000" << '\n';
    }

    else if (guessDigit1 == lotteryDigit1 || guessDigit1 == lotteryDigit2 || guessDigit1 == lotteryDigit3 || guessDigit2 == lotteryDigit1 || guessDigit2 == lotteryDigit2 || guessDigit2 == lotteryDigit3 || guessDigit3 == lotteryDigit1 || guessDigit3 == lotteryDigit2 || guessDigit3 == lotteryDigit3){
        cout << "One digit matched : you win $1000" << '\n';
    }
    
    else {
        cout << "no match, thanks for playing" << '\n';
    }
 
 
 
    return 0;
}