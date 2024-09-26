//Palindrome Check: Verify if a given string is a palindrome

#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string& str) {
    int left = 0, right = str.length() - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    string str = "radar";
    cout << (isPalindrome(str) ? "Palindrome" : "Not a palindrome") << endl;
    return 0;
}

// A palindrome is a string that reads the same forwards and backwards. For example, "radar" and "level" are palindromes.