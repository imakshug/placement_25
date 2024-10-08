//Write a program to determine if a given year is a leap year

#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}


// This program checks if a year is divisible by 4 but not 100, or divisible by 400 to determine if it’s a leap year.