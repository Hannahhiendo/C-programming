#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main ()
{


srand(time(0));
int number1 = rand() % 100;
int number2 = rand() % 100;
int number3 = rand() % 100;
cout << "what is " << number1 << " + " << number2 << " + "<< number3 << " ? ";
int answer;
cin >> answer;

if (number1 + number2 + number3 == answer){
    cout << "You are correct"<< '\n';
}
else {
    cout << "Your answer is wrong\n" << number1 <<" + "<< number2 << " + " << number3 << " is " << (number1 + number2 + number3 ) << '\n';
}

return 0;

}