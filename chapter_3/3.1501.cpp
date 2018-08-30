#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
srand(time(0));
int computer = rand() % 3;

cout << " Rock , Paper , Scissor , Shoot rock(0)paper(1)scissor(2) " << '\n';
int guess;
cin >> guess;

if(computer == 1 && guess > computer ){
    cout << "You win" << '\n';
}
if(computer == 1 && guess < computer ){
    cout << "You lose" << '\n';
}
if(computer == 0 && guess == 1 ){
    cout << "You win" << '\n';
}
if(computer == 0 && guess == 2 ){
    cout << "You lose" << '\n';
}
if(computer == 2 && guess == 1 ){
    cout << "You lose" << '\n';
}
if(computer == 2 && guess == 0 ){
    cout << "You win" << '\n';
}
if(computer == 1 && guess == computer ){
    cout << "Draw" << '\n';
}
if(computer == 2 && guess == computer ){
    cout << "Draw" << '\n';
}
if(computer == 3 && guess == computer ){
    cout << "Draw" << '\n';
}

return 0;
}