// 5. Array Rotation

#include <iostream>
#include <vector>
using namespace std;

void rotateArray(vector<int>& arr, int k) {
    int n = arr.size();
    k = k % n; // In case k >= n
    vector<int> rotated(n);
    for (int i = 0; i < n; i++) {
        rotated[(i + k) % n] = arr[i];
    }
    arr = rotated;
}

// Usage
int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 2;
    rotateArray(arr, k);
    cout << "Rotated Array: ";
    for (int num : arr) cout << num << " ";
    cout << endl;
    return 0;
}
