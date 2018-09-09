#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main ()
{
char continueLoop = 'Y';
while (continueLoop == 'Y'){
    int correctCount = 0;
    int count = 0;
    long startTime = time(0);
    int numberOfQuestions = 5;

    while (count < numberOfQuestions){
        srand(time(0));
        int number1 = rand() % 10;
        int number2 = rand() % 10;

        if (number1 < number2) {
            int peanut = number1;
            number1 = number2;
            number2 = peanut;
        }

        cout << "what is " << number1 << " - " << number2 << "? ";
        int answer;
        cin >> answer;

        if (number1 - number2 == answer){
            cout << "You are correct"<< '\n';
            correctCount++;
        }
        else {
            cout << "Your answer is wrong\n" << number1 <<" - "<< number2 << " should be " << (number1 - number2 ) << '\n';
        }   

        count++;
}
long endTime = time(0);
long testTime = endTime - startTime;
cout << "Correct count is " << correctCount << " out of 5" << "\nTest time is " << testTime << " sesonds\n";

cout << "Enter Y to continue and N to quit" << '\n';
cin >> continueLoop;
}
return 0;

}