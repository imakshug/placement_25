// 2. Fibonacci Sequence

#include <iostream>
using namespace std;

void fibonacci(int n) {
    int a = 0, b = 1;
    cout << "Fibonacci Series up to " << n << " terms: ";
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
}

// Usage
int main() {
    int n = 10;
    fibonacci(n);
    return 0;
}
