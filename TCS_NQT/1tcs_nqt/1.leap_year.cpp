// 1. Check for Leap Year

#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Usage
int main() {
    int year = 2024;
    cout << year << (isLeapYear(year) ? " is a leap year." : " is not a leap year.") << endl;
    return 0;
}
