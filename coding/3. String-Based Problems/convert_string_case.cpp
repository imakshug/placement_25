// Convert String Case: Convert lowercase characters of a string to uppercase and vice versa
#include <iostream>
#include <string>
using namespace std;

string convertCase(const string& str) {
    string convertedStr = str;
    for (char& ch : convertedStr) {
        if (islower(ch)) {
            ch = toupper(ch);
        } else if (isupper(ch)) {
            ch = tolower(ch);
        }
    }
    return convertedStr;
}

int main() {
    string str = "Hello World";
    cout << "Converted case: " << convertCase(str) << endl;
    return 0;
}

// This program converts all lowercase letters to uppercase and vice versa in a given string.