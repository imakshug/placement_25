// 6. Find Maximum and Minimum in an Array

#include <iostream>
#include <vector>
#include <utility> // for std::pair
using namespace std;

pair<int, int> findMaxMin(const vector<int>& arr) {
    int maxVal = arr[0], minVal = arr[0];
    for (int num : arr) {
        if (num > maxVal) maxVal = num;
        if (num < minVal) minVal = num;
    }
    return {maxVal, minVal};
}

// Usage
int main() {
    vector<int> arr = {3, 5, 1, 8, 4};
    pair<int, int> result = findMaxMin(arr); // Store the returned pair
    cout << "Maximum: " << result.first << ", Minimum: " << result.second << endl; // Access via 'first' and 'second'
    return 0;
}
