// Binary to Decimal Conversion

#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(const string& binary) {
    int decimal = 0;
    int length = binary.length();
    for (int i = 0; i < length; i++) {
        if (binary[length - 1 - i] == '1') {
            decimal += pow(2, i);
        }
    }
    return decimal;
}

// Usage
int main() {
    string binaryNumber = "1010";
    cout << "Decimal of " << binaryNumber << " is: " << binaryToDecimal(binaryNumber) << endl;
    return 0;
}

// The Binary to Decimal Conversion function translates a binary string back into a decimal number.