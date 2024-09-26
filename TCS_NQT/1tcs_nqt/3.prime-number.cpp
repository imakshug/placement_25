// 3. Prime Number Check

#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

// Usage
int main() {
    int number = 29;
    cout << number << (isPrime(number) ? " is a prime number." : " is not a prime number.") << endl;
    return 0;
}
