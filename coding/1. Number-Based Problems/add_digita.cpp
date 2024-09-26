//  Add Digits: Find the sum of the digits of a given number

#include <iostream>
using namespace std;

int sumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Sum of digits: " << sumOfDigits(num) << endl;
    return 0;
}

//The sum of the digits of a number is the result of adding all individual digits in the number. For instance, for the number 123, the sum of its digits is 1 + 2 + 3 = 6.
