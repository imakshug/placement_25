// Find the Third Maximum Number: Given an array, find the third largest element

#include <iostream>
#include <vector>
#include <set>
using namespace std;

int thirdMax(vector<int>& nums) {
    set<int> uniqueNums(nums.begin(), nums.end());
    if (uniqueNums.size() < 3) {
        return *uniqueNums.rbegin(); // Return the maximum if less than 3 unique numbers
    }
    auto it = uniqueNums.end();
    --it; // Move to the last (largest)
    --it; // Move to the second largest
    --it; // Move to the third largest
    return *it;
}

int main() {
    vector<int> nums = {3, 2, 1};
    cout << "Third maximum number: " << thirdMax(nums) << endl;
    return 0;
}

// To find the third largest element, we can use a set or maintain three variables to track the largest, second largest, and third largest elements.