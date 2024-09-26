// 8. Binary Search Implementation

#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int>& arr, int key) {
    int left = 0, right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) return mid;
        if (arr[mid] < key) left = mid + 1;
        else right = mid - 1;
    }
    return -1; // Element not found
}

// Usage
int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int key = 4;
    int index = binarySearch(arr, key);
    cout << "Element " << key << " is at index: " << (index != -1 ? to_string(index) : "not found") << endl;
    return 0;
}
