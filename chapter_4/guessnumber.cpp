#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() { 
    srand (time(0));
    int number = rand() % 101;
    cout << "Gues a magic number between 0 and 100";
    int guess = -1;

  
    while (guess != number)
    {
        cout << "\nEnter your guess";
        cin >> guess;

        if(guess == number){
            cout << " Yes,the number " << number << '\n';
        }
        else if(guess < number){
            cout << "Your guess is too low";
        }
        else {
            cout << "Your guess is too high";
        }
        
    }
   

    return 0;
}