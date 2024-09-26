// Linear Search
#include <iostream>
#include <vector>
using namespace std;

int linearSearch(const vector<int>& arr, int key) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == key) return i; // Return the index if the key is found
    }
    return -1; // Element not found
}

int main() {
    vector<int> arr = {5, 3, 8, 4, 2};
    int key = 4; // Element to search for

    int index = linearSearch(arr, key); // Perform linear search

    if (index != -1) {
        cout << "Element " << key << " found at index: " << index << endl;
    } else {
        cout << "Element " << key << " not found in the array." << endl;
    }

    return 0;
}

// A simple search algorithm that checks each element in the list until the desired element is found or the list ends.