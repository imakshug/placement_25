// 7. Palindrome String Check

#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string& str) {
    int left = 0, right = str.length() - 1;
    while (left < right) {
        if (str[left] != str[right]) return false;
        left++;
        right--;
    }
    return true;
}

// Usage
int main() {
    string str = "madam";
    cout << str << (isPalindrome(str) ? " is a palindrome." : " is not a palindrome.") << endl;
    return 0;
}
