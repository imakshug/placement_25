// Identify if a number is a perfect number.

#include <iostream>
using namespace std;

bool isPerfect(int num) {
    int sum = 0;

    // Find divisors and sum them
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Check if the sum of divisors is equal to the number
    return (sum == num);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPerfect(num))
        cout << num << " is a perfect number." << endl;
    else
        cout << num << " is not a perfect number." << endl;

    return 0;
}


// A perfect number is a number that is equal to the sum of its proper divisors (excluding itself). For example, 6 is a perfect number because 1 + 2 + 3 = 6