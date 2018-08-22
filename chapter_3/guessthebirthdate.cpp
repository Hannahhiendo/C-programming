#include <iostream>
using namespace std;

int main ()
{
    int date = 0;
    char answer;

    cout << "Is your birth date in Set1?" << '\n';
    cout << "1 3 5 7\n" << "9 11 13 15\n" << "17 19 21 23\n" << "25 27 29 31\n";
    cout << "Enter N for no and Y for yes " << '\n';
    cin >> answer;

    if (answer == 'Y')
    date += 1;


    cout << "Is your birth date in Set2?" << '\n';
    cout << "2 3 6 7\n" << "10 11 14 15\n" << "18 19 22 23\n" << "26 27 30 31\n";
    cout << "Enter N for no and Y for yes " << '\n';
    cin >> answer;

    if (answer == 'Y')
    date += 2;


    cout << "Is your birth date in Set3?" << '\n';
    cout << "4 5 6 7\n" << "12 13 14 15\n" << "20 21 22 23\n" << "28 29 30 31\n";
    cout << "Enter N for no and Y for yes " << '\n';
    cin >> answer;

    if (answer == 'Y')
    date += 4;


    cout << "Is your birth date in Set4?" << '\n';
    cout << "8 9 10 11\n" << "12 13 14 15\n" << "20 21 22 23\n" << "28 29 30 31\n";
    cout << "Enter N for no and Y for yes " << '\n';
    cin >> answer;

    if (answer == 'Y')
    date += 8;


    cout << "Is your birth date in Set5?" << '\n';
    cout << "16 17 18 19\n" << "20 21 22 23\n" << "24 25 26 27\n" << "28 29 30 31\n";
    cout << "Enter N for no and Y for yes " << '\n';
    cin >> answer;

    if (answer == 'Y')
    date += 16;

    cout << "Your birth date is on the " << date << "th of every month" <<'\n';

    return 0;

}
