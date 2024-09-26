// Replace All '0's with '5' in a Number

#include <iostream>
using namespace std;

int replaceZerosWithFives(int num) {
    int result = 0, place = 1;
    
    while (num != 0) {
        int digit = num % 10;
        if (digit == 0) {
            digit = 5; // Replace 0 with 5
        }
        result += digit * place;
        place *= 10;
        num /= 10;
    }
    
    return result;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Number after replacing all '0's with '5's: " << replaceZerosWithFives(num) << endl;
    return 0;
}

//This program replaces every occurrence of the digit 0 in a number with the digit 5. For example, if the input number is 1020, the result will be 1525, where all 0s have been replaced by 5s.