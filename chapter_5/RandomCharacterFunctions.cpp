#include <cstdlib>
using namespace std;

char getRandomNumber(char ch1, char ch2){
    return static_cast<int>(ch1 + rand() % (ch2-ch1 +1));
}

char getRandomLowerCaseLetter(){
    return getRandomNumber('a','z');
}

char getRandomUpperCaseLetter(){
    return getRandomNumber('A','Z');
}

char getRandomDigit(){
    return getRandomNumber('0','9');
}

char getRandomCharacter(){
    return getRandomNumber(0,127);
}