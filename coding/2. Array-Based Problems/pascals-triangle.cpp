//Pascal’s Triangle: Print Pascal’s Triangle up to n rows

#include <iostream>
#include <vector>
using namespace std;

void printPascalTriangle(int n) {
    vector<vector<int>> triangle(n);
    for (int line = 0; line < n; line++) {
        triangle[line].resize(line + 1);
        triangle[line][0] = triangle[line][line] = 1; // First and last values in each row are 1
        for (int j = 1; j < line; j++) {
            triangle[line][j] = triangle[line - 1][j - 1] + triangle[line - 1][j];
        }
    }
    for (const auto& row : triangle) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 5; // Number of rows
    cout << "Pascal's Triangle up to " << n << " rows:" << endl;
    printPascalTriangle(n);
    return 0;
}

// Pascal’s Triangle is constructed such that each number is the sum of the two directly above it.