// Quick Sort
#include <iostream>
#include <vector>
using namespace std;

// Partition function to rearrange the array
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high]; // Choosing the last element as the pivot
    int i = (low - 1);     // Pointer for the smaller element
    for (int j = low; j < high; j++) {
        // If the current element is smaller than or equal to the pivot
        if (arr[j] < pivot) {
            i++; // Increment the index of the smaller element
            swap(arr[i], arr[j]); // Swap the current element with the smaller element
        }
    }
    swap(arr[i + 1], arr[high]); // Swap the pivot element with the element at i+1
    return (i + 1); // Return the partitioning index
}

// Quick Sort function
void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        // Partitioning index
        int pi = partition(arr, low, high);

        // Recursively sort elements before and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    vector<int> arr = {10, 7, 8, 9, 1, 5};

    cout << "Original array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    quickSort(arr, 0, arr.size() - 1); // Sort the array

    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

// Another divide-and-conquer algorithm that selects a 'pivot' element and partitions the array around the pivot.