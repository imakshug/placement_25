// Array Rotation: Rotate an array K times to the right

#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int>& arr, int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void rotateArray(vector<int>& arr, int k) {
    int n = arr.size();
    k = k % n; // Handle cases where k is greater than n
    reverseArray(arr, 0, n - 1);
    reverseArray(arr, 0, k - 1);
    reverseArray(arr, k, n - 1);
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int k = 3; // Number of rotations
    rotateArray(arr, k);
    cout << "Rotated Array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}

// To rotate an array K times to the right, we can use a reversal algorithm.