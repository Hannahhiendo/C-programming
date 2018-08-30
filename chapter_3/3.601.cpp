#include <cstdlib>
#include <iostream>
using namespace std;

int main (){

srand(time(0));
int number = rand() % 26 + 65;

char c= (char)number;

cout << c << '\n';


}








                  