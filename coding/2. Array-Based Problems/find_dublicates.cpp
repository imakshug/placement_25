//Find Duplicates: Identify duplicates in an array in O(n) time and O(1) space

#include <iostream>
#include <vector>
using namespace std;

void findDuplicates(vector<int>& nums) {
    cout << "Duplicates: ";
    for (int i = 0; i < nums.size(); i++) {
        int index = abs(nums[i]) - 1; // Get the index
        if (nums[index] < 0) {
            cout << index + 1 << " "; // Found a duplicate
        } else {
            nums[index] = -nums[index]; // Mark as visited
        }
    }
    cout << endl;
}

int main() {
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
    findDuplicates(nums);
    return 0;
}

// To find duplicates in an array using O(n) time and O(1) space, we can modify the array itself to mark visited elements. This approach works under the assumption that the array contains elements in a specific range.