#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the filing status\n"
    << "0 - single filer , 1 - married jointly ,\n"
    << "2 - married separately, 3 - head of household\n";

    int status;
    cin >> status;

    cout << "Enter taxable income: ";
    double income;
    cin >> income;

    double tax;

    if (status == 0){
        if (income <= 6000){
            tax = income * 0.10;
        }
        else if (income <= 27950){
            tax = 6000 * 0.10 + (income - 6000) * 0.15;
        }
        else if (income <= 67700){
            tax = 6000 * 0.10 + (income - 6000) * 0.15 + (income - 27950) * 0.27;
        }
        else if (income <= 141250){
            tax = 6000 * 0.10 + (income - 6000) * 0.15 + (income - 27950) * 0.27 + (income - 67700) * 0.30;
        }
        else if (income <= 307050){
            tax = 6000 * 0.10 + (income - 6000) * 0.15 + (income - 27950) + (income - 67700) * 0.30 + (income - 141250) * 0.35;
        }
        else {
            tax = 6000 * 0.10 + (income - 6000) * 0.15 + (income - 27950) + (income - 67700) * 0.30 +(income - 141250) * 0.35 + (income - 307050) * 0.386;
        }
    }


    if (status == 1){
        if (income <= 12000){
            tax = income * 0.10;
        }
        else if (income <= 46700){
            tax = 12000 * 0.10 + (income - 12000) * 0.15;
        }
        else if (income <= 112850){
            tax = 12000 * 0.10 + (income - 12000) * 0.15 + (income - 46700) * 0.27;
        }
        else if (income <= 171950){
            tax = 12000 * 0.10 + (income - 12000) * 0.15 + (income - 46700) * 0.27 + (income - 46700) * 0.30;
        }
        else if (income <= 307050){
            tax = 12000 * 0.10 + (income - 12000) * 0.15 + (income - 46700) * 0.27 + (income - 112850) * 0.30 + (income - 171950) * 0.35;
        }
        else {
            tax = 12000 * 0.10 + (income - 12000) * 0.15 + (income - 46700) * 0.27 + (income - 112850) * 0.30 +(income - 171950) * 0.35 + (income - 307050) * 0.386;
        }
    }

        if (status == 1){
        if (income <= 6000){
            tax = income * 0.10;
        }
        else if (income <= 23350){
            tax = 6000 * 0.10 + (income - 6000) * 0.15;
        }
        else if (income <= 112850){
            tax = 6000 * 0.10 + (income - 6000) * 0.15 + (income - 23350) * 0.27;
        }
        else if (income <= 171950){
            tax = 6000 * 0.10 + (income - 6000) * 0.15 + (income - 23350) * 0.27 + (income - 67700) * 0.30;
        }
        else if (income <= 307050){
            tax = 6000 * 0.10 + (income - 6000) * 0.15 + (income - 23350) + (income - 67700) * 0.30 + (income - 141250) * 0.35;
        }
        else {
            tax = 6000 * 0.10 + (income - 6000) * 0.15 + (income - 23350) + (income - 67700) * 0.30 +(income - 141250) * 0.35 + (income - 307050) * 0.386;
        }
    }

        if (status == 1){
        if (income <= 12000){
            tax = income * 0.10;
        }
        else if (income <= 46700){
            tax = 12000 * 0.10 + (income - 6000) * 0.15;
        }
        else if (income <= 112850){
            tax = 12000 * 0.10 + (income - 6000) * 0.15 + (income - 27950) * 0.27;
        }
        else if (income <= 171950){
            tax = 12000 * 0.10 + (income - 6000) * 0.15 + (income - 27950) * 0.27 + (income - 67700) * 0.30;
        }
        else if (income <= 307050){
            tax = 12000 * 0.10 + (income - 6000) * 0.15 + (income - 27950) + (income - 67700) * 0.30 + (income - 141250) * 0.35;
        }
        else {
            tax = 12000 * 0.10 + (income - 6000) * 0.15 + (income - 27950) + (income - 67700) * 0.30 +(income - 141250) * 0.35 + (income - 307050) * 0.386;
        }
    }

    cout << tax << '\n';

}