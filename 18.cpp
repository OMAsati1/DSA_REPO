#include <iostream>
#include <vector>
using namespace std;

void insertionSort(int n, vector<int> &arr) {
    int i = 1;
    while(i < n) {
        int temp = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > temp) {
            // Shift
            arr[j + 1] = arr[j];
            j--;
        }

        // Copy temp value
        arr[j + 1] = temp;
        i++;
    }
}

int main() {
    vector<int> arr = {64, 25, 12, 22, 11};
    int n = arr.size();

    cout << "Original array: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    insertionSort(n, arr);

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
