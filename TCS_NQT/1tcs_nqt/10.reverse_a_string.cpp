// 10. Reverse a String
// Write a program to reverse the characters of a string.
#include <iostream>
#include <string>
using namespace std;

string reverseString(const string& str) {
    string reversed;
    for (int i = str.length() - 1; i >= 0; i--) {
        reversed += str[i];
    }
    return reversed;
}

// Usage
int main() {
    string str = "Hello, World!";
    cout << "Reversed string: " << reverseString(str) << endl;
    return 0;
}
