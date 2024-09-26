// Sum of Array Elements: Find the sum of all elements in an array

#include <iostream>
#include <vector>
using namespace std;

int sumOfArray(const vector<int>& arr) {
    int sum = 0;
    for (int num : arr) {
        sum += num;
    }
    return sum;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    cout << "Sum of array elements: " << sumOfArray(arr) << endl;
    return 0;
}

// To find the sum of all elements in an array, we can iterate through the array and accumulate the total.