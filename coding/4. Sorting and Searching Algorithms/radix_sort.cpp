// Radix Sort

#include <iostream>
#include <vector>
#include <algorithm> // For std::max_element
using namespace std;

// Function to get the maximum value in the array
int getMax(const vector<int>& arr) {
    return *max_element(arr.begin(), arr.end());
}

// Counting sort function for radix sort
void countingSortRadix(vector<int>& arr, int exp) {
    vector<int> output(arr.size());
    int count[10] = {0};

    // Count occurrences of each digit
    for (int i = 0; i < arr.size(); i++)
        count[(arr[i] / exp) % 10]++;

    // Change count[i] so that count[i] contains the actual position of this digit in output[]
    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];

    // Build the output array
    for (int i = arr.size() - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    // Copy the output array back to arr[], so that arr[] now contains sorted numbers
    for (int i = 0; i < arr.size(); i++)
        arr[i] = output[i];
}

// Main function that implements radix sort
void radixSort(vector<int>& arr) {
    int maxVal = getMax(arr); // Find the maximum number to determine the number of digits
    // Apply counting sort to sort elements based on individual digits
    for (int exp = 1; maxVal / exp > 0; exp *= 10)
        countingSortRadix(arr, exp);
}

int main() {
    vector<int> arr = {170, 45, 75, 90, 802, 24, 2, 66};

    cout << "Original array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    radixSort(arr); // Sort the array

    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

// Sorts integers by processing individual digits. It works by distributing the numbers into buckets according to their individual digits, starting from the least significant digit to the most significant.