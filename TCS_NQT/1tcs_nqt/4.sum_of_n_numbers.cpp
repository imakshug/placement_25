// 4. Sum of Natural Numbers

#include <iostream>
using namespace std;

int sumOfNaturalNumbers(int n) {
    return n * (n + 1) / 2;
}

// Usage
int main() {
    int n = 10;
    cout << "Sum of first " << n << " natural numbers is: " << sumOfNaturalNumbers(n) << endl;
    return 0;
}
