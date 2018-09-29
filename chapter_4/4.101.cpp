#include <iostream>
using namespace std;

int main(){
    cout << "Enter an int value (the program exits if the input is 0)" << '\n';
    int input;
    cin >> input;
    
int positives = 0;
int negatives = 0;
int countOfIntegers = 0;
float average = 0;
int total = 0;
    while(input != 0){
        countOfIntegers ++;
        total += input;
        average += input;
        
        if(input < 0){
            negatives ++;
        }

        if(input > 0){
            positives ++;
        }
        
     cout << "Enter an int value (the program exits if the input is 0)" << '\n';
        cin >> input;
       
    }

average = average / countOfIntegers;

cout << "the total is " << total << '\n' << "the average is " << average << '\n';

cout << "there are " << positives << " postitives "<< '\n';
cout << "there are "<< negatives << " negatives "<< '\n';
     
}