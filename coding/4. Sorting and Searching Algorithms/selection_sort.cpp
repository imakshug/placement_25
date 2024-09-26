// Selection Sort
#include <iostream>
#include <vector>
using namespace std;

// Function to perform selection sort on the array
void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i; // Assume the minimum is the first element of the unsorted part
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j; // Update the index of the minimum element
            }
        }
        swap(arr[i], arr[minIndex]); // Swap the found minimum element with the first element
    }
}

// Main function to test the selection sort implementation
int main() {
    vector<int> arr = {64, 25, 12, 22, 11};

    cout << "Original array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    selectionSort(arr); // Sort the array using selection sort

    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

// Divides the input list into two parts: a sorted and an unsorted part, repeatedly selecting the smallest (or largest) element from the unsorted part.