// 9. Armstrong Number Check
// Determine if a given number is an Armstrong number.
#include <iostream>
#include <cmath> // Include cmath for the pow function
using namespace std;

bool isArmstrong(int num) {
    int sum = 0, temp = num, digits = 0;

    // Count the number of digits
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num; // Reset temp to the original number

    // Calculate the sum of the digits raised to the power of the number of digits
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits); // Use pow from cmath
        temp /= 10;
    }
    
    return sum == num; // Check if the sum equals the original number
}

// Usage
int main() {
    int number = 153; // You can change this number to test
    cout << number << (isArmstrong(number) ? " is an Armstrong number." : " is not an Armstrong number.") << endl;
    return 0;
}

