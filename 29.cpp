// #include <iostream>
// using namespace std;

// int main()
// {
//     int row;
//     cin >> row;
//     int col;
//     cin >> col;

//     int **arr = new int *[row];
//     for (int i = 0; i < row; i++)
//     {
//         arr[i] = new int[col];
//     }
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     for (int i = 0; i < row; i++)
//     {
//         delete[] arr[i];
//     }

//     delete[] arr;
//     return 0;
// }
#include <iostream>

using namespace std;

int main() {
    // Number of rows in the jagged array
    int rows = 3;

    // Create an array of pointers (each pointer will point to an array of integers)
    int** jaggedArray = new int*[rows];

    // Sizes of each row (jagged array)
    int rowSizes[] = {3, 5, 2};

    // Allocate memory for each row
    for (int i = 0; i < rows; ++i) {
        jaggedArray[i] = new int[rowSizes[i]];
    }

    // Initialize the jagged array with some values
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < rowSizes[i]; ++j) {
            jaggedArray[i][j] = i + j;  // Example initialization
        }
    }

    // Print the jagged array
    cout << "Jagged Array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < rowSizes[i]; ++j) {
            cout << jaggedArray[i][j] << " ";
        }
        cout << endl;
    }

    // Deallocate memory
    for (int i = 0; i < rows; ++i) {
        delete[] jaggedArray[i];
    }
    delete[] jaggedArray;

    return 0;
}
