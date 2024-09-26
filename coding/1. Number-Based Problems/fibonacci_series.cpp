// Fibonacci Series: Generate the Fibonacci series up to n terms

#include <iostream>
using namespace std;

void fibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm;

    cout << "Fibonacci Series: " << t1 << ", " << t2;

    for (int i = 3; i <= n; ++i) {
        nextTerm = t1 + t2;
        cout << ", " << nextTerm;
        t1 = t2;
        t2 = nextTerm;
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    fibonacci(n);
    return 0;
}

// A Fibonacci series is a sequence of numbers where each number (after the first two) is the sum of the two preceding ones. 
// The series starts with 0 and 1. For example, the first 6 terms of the Fibonacci series are 0, 1, 1, 2, 3, 5. 
// Each number in the series is the sum of the two numbers that come before it.