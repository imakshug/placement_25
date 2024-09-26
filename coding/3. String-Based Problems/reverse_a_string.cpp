//  Reverse a String: Write a program to reverse the characters of a string

#include <iostream>
#include <string>
using namespace std;

string reverseString(const string& str) {
    string reversedStr = str;
    int n = str.length();
    for (int i = 0; i < n / 2; i++) {
        swap(reversedStr[i], reversedStr[n - i - 1]);
    }
    return reversedStr;
}

int main() {
    string str = "hello";
    cout << "Reversed string: " << reverseString(str) << endl;
    return 0;
}

// Reversing a string involves flipping it so that the first character becomes the last and so forth.