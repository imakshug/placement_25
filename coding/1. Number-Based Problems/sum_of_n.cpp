//Sum of First n Natural Numbers: Compute the sum of the first n natural numbers.

#include <iostream>
using namespace std;

int sumOfNaturalNumbers(int n) {
    return (n * (n + 1)) / 2; // Formula: n(n + 1) / 2
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Sum of first " << n << " natural numbers is: " << sumOfNaturalNumbers(n) << endl;
    return 0;
}

//The sum of the first n natural numbers can be calculated using the formula n(n + 1) / 2. For example, if n = 5, the sum of the first 5 natural numbers is 1 + 2 + 3 + 4 + 5 = 15.