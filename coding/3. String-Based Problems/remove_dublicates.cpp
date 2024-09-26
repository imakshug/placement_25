// Remove Duplicates from a String: Eliminate duplicate characters from an input string
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

string removeDuplicates(const string& str) {
    unordered_set<char> seen;
    string result;
    for (char ch : str) {
        if (seen.find(ch) == seen.end()) {
            seen.insert(ch);
            result += ch;
        }
    }
    return result;
}

int main() {
    string str = "hello world";
    cout << "String after removing duplicates: " << removeDuplicates(str) << endl;
    return 0;
}

// This program removes duplicate characters while preserving the original order of characters.