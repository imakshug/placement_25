// Count Frequency of Characters: Count the frequency of each character in a string

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

void countCharacterFrequency(const string& str) {
    unordered_map<char, int> frequency;
    for (char ch : str) {
        frequency[ch]++;
    }
    
    cout << "Character frequencies:\n";
    for (const auto& pair : frequency) {
        cout << pair.first << ": " << pair.second << endl;
    }
}

int main() {
    string str = "hello world";
    countCharacterFrequency(str);
    return 0;
}

// This program counts how many times each character appears in a given string.