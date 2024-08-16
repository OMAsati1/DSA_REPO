// #include <iostream>
// #include <vector>

// using namespace std;

// // Function to find all subsets whose sum is divisible by the size of the set using pigeonhole principle
// vector<vector<int>> findAllSubsetsWithSumDivisibleByN(const vector<int>& arr) {
//     int n = arr.size();
//     vector<int> prefixSum(n + 1, 0);
//     vector<vector<int>> subsets;
//     vector<vector<int>> remainderIndices(n, vector<int>(0)); // Use a vector of vectors to track indices of each remainder

//     remainderIndices[0].push_back(-1); // Initialize with -1 to handle cases where the sum from the start is divisible by n

//     int sum = 0;
//     for (int i = 0; i < n; ++i) {
//         sum += arr[i];
//         int remainder = sum % n;
//         if (remainder < 0) {
//             remainder += n; // Handle negative remainders
//         }

//         // Check if this remainder has been seen before
//         if (!remainderIndices[remainder].empty()) {
//             // Found one or more subarrays with sum divisible by n
//             for (int index : remainderIndices[remainder]) {
//                 vector<int> subset(arr.begin() + index + 1, arr.begin() + i + 1);
//                 subsets.push_back(subset);
//             }
//         }
//         remainderIndices[remainder].push_back(i); // Store current index for this remainder
//     }

//     return subsets;
// }

// int main() {
//     vector<int> arr = {3, 1, 4, 2, 2};
//     vector<vector<int>> results = findAllSubsetsWithSumDivisibleByN(arr);

//     if (!results.empty()) {
//         cout << "Subsets with sum divisible by " << arr.size() << ":" << endl;
//         for (const auto& subset : results) {
//             for (int num : subset) {
//                 cout << num << " ";
//             }
//             cout << endl;
//         }
//     } else {
//         cout << "No subsets found with sum divisible by " << arr.size() << endl;
//     }

//     return 0;
// }
// #include <iostream>
// using namespace std;

// // Function to determine the type of character at position (i, j) in a diamond of size s
// char diamond(int i, int j, int s) {
//     bool backslash = true;

//     // Checking if the point lies in the lower part or not.
//     if (i >= s / 2) {
//         i = s - i - 1;
//         backslash = !backslash;
//     }

//     // Checking if the point lies in the left part or not.
//     if (j < s / 2) {
//         j = s - j - 1;
//         backslash = !backslash;
//     }

//     j -= s / 2;

//     // Checking if the point is on the diagonal or not.
//     if (i == j) {
//         if (backslash) {
//             return '\\';
//         } else {
//             return '/';
//         }
//     }
//     // Checking if the point is inside the diamond or not.
//     else if (i > j) {
//         return 'o';
//     } else {
//         return 'e';
//     }
// }

// // Function to print the diamond grid based on given dimensions r, c and diamond size s
// void printTheDiamond(int r, int c, int s) {
//     s *= 2; // Double the size to adjust for the pattern size
//     r = s * r; // Adjust rows based on diamond size and grid dimensions
//     c = s * c; // Adjust columns based on diamond size and grid dimensions

//     for (int i = 0; i < r; ++i) {
//         for (int j = 0; j < c; ++j) {
//             // Calculate the character for the current position (i % s, j % s)
//             cout << diamond(i % s, j % s, s);
//         }
//         cout << "\n"; // Newline after each row
//     }
// }

// int main() {
//     int rows, columns, size;

//     // Input dimensions: number of rows, number of columns, and size of diamond
//     cin >> rows >> columns >> size;

//     // Call the function to print the diamond pattern grid
//     printTheDiamond(rows, columns, size);

//     return 0;
// }
#include <iostream>
using namespace std;

// Function to determine the type of character at position (i, j) in a diamond of size s
char diamond(int i, int j, int s) {
    bool backslash = true;

    // Precompute adjustments based on diamond size
    if (i >= s / 2) {
        i = s - i - 1;
        backslash = !backslash;
    }
    if (j < s / 2) {
        j = s - j - 1;
        backslash = !backslash;
    } 
    j -= s / 2;

    // Determine the character based on precomputed values
        if (i == j) {
        if (backslash) {
            return '\\';
        } else {
            return '/';
        }
    } else if (i > j) {
        return 'o';
    } else {
        return 'e';
    }

}

// Function to print the diamond grid based on given dimensions r, c and diamond size s
void printTheDiamond(int r, int c, int s) {
    // Calculate the total size of the grid
    int totalRows = 2 * s * r;
    int totalCols = 2 * s * c;

    // Iterate through each cell in the grid
    for (int i = 0; i < totalRows; ++i) {
        for (int j = 0; j < totalCols; ++j) {
            // Calculate the character for the current position (i % s, j % s)
            cout << diamond(i % (2 * s), j % (2 * s), 2 * s);
        }
        cout << "\n"; // Move to the next line after printing each row
    }
}

int main() {
    int rows, columns, size;

    // Input dimensions: number of rows, number of columns, and size of diamond
    cin >> rows >> columns >> size;

    // Call the function to print the diamond pattern grid
    printTheDiamond(rows, columns, size);

    return 0;
}

