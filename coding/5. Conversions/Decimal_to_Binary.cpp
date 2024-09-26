// Decimal to Binary Conversion
#include <iostream>
using namespace std;

void decimalToBinary(int n) {
    if (n == 0) {
        cout << 0;
        return;
    }
    string binary = "";
    while (n > 0) {
        binary = to_string(n % 2) + binary;
        n /= 2;
    }
    cout << binary;
}

// Usage
int main() {
    int decimalNumber = 10;
    cout << "Binary of " << decimalNumber << " is: ";
    decimalToBinary(decimalNumber);
    return 0;
}

// The Decimal to Binary Conversion function converts a decimal number into its binary representation.