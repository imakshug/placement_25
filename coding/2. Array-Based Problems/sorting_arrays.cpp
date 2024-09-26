// Sorting Arrays: Implement sorting algorithms such as 

 // Bubble Sort, Selection Sort, Insertion Sort, Merge Sort, and Quick Sort.
 // 1. Bubble Sort: Repeatedly iterate through the array, comparing adjacent elements and swapping
 // them if they are in the wrong order. Repeat this process until no more swaps are needed.
 // 2. Selection Sort: Find the smallest (or largest) element from the unsorted part
 // of the array and swap it with the first unsorted element.
 // 3. Insertion Sort: Iterate through the array one element at a time, inserting each
 // element into its proper position in the sorted part of the array.
 // 4. Merge Sort: Divide the array into two halves, recursively sort each half, and
 // then merge the two sorted halves.


 #include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    bubbleSort(arr);
    cout << "Sorted array (Bubble Sort): ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
