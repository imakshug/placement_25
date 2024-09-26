//  Anagram Check: Check if two strings are anagrams of each other

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

bool areAnagrams(const string& str1, const string& str2) {
    if (str1.length() != str2.length()) return false;

    unordered_map<char, int> charCount;
    for (char ch : str1) {
        charCount[ch]++;
    }
    for (char ch : str2) {
        if (--charCount[ch] < 0) return false;
    }
    return true;
}

int main() {
    string str1 = "listen";
    string str2 = "silent";
    cout << (areAnagrams(str1, str2) ? "Anagrams" : "Not anagrams") << endl;
    return 0;
}

// Anagrams are strings that contain the same characters in a different order. For example, "listen" and "silent" are anagrams.