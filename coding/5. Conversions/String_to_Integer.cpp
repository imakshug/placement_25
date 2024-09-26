// String to Integer Conversion (Without Using Built-in Functions)
#include <iostream>
using namespace std;

int stringToInteger(const string& str) {
    int result = 0;
    for (char ch : str) {
        result = result * 10 + (ch - '0');
    }
    return result;
}

// Usage
int main() {
    string numberString = "12345";
    cout << "Integer value of string \"" << numberString << "\" is: " << stringToInteger(numberString) << endl;
    return 0;
}

// The String to Integer Conversion function manually converts a numeric string to an integer without relying on built-in functions.