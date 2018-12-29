#include <iostream>
#include "RandomCharacterFunctions.cpp"
using namespace std;

int main(){

const int NUMBER_OF_CHARS = 175;
const int NUMBER_PER_LINE = 25;

srand(time(0));

for(int i = 0; i < NUMBER_OF_CHARS; i++)
{
    char ch = getRandomUpperCaseLetter();
    if((i+1) % NUMBER_PER_LINE == 0){
        cout << ch << '\n';
    }
    else{
        cout << ch;
    }
}    
return 0;

}