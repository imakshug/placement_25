// Couting Sort

#include <iostream>
#include <vector>
#include <algorithm> // For std::max_element

using namespace std;

void countingSort(vector<int>& arr) {
    // Find the maximum value in the array
    int maxVal = *max_element(arr.begin(), arr.end());
    
    // Create a count array initialized to 0
    vector<int> count(maxVal + 1, 0);

    // Count the occurrences of each element
    for (int num : arr) {
        count[num]++;
    }

    // Reconstruct the sorted array
    int index = 0;
    for (int i = 0; i <= maxVal; i++) {
        while (count[i]-- > 0) {
            arr[index++] = i;
        }
    }
}

int main() {
    vector<int> arr = {4, 2, 2, 8, 3, 3, 1};
    
    cout << "Original array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    countingSort(arr);

    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}


// An integer sorting algorithm that counts the number of occurrences of each distinct element and then computes the positions of each element in the output array.