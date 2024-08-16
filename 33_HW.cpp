// #include <iostream>
// using namespace std;

// int findPeakUtil(int arr[], int s, int e) {
//     // Calculate middle index
//     int mid = s + (e - s) / 2;

//     // Check if the middle element is a peak
//     if ((mid == 0 || arr[mid] >= arr[mid - 1]) &&
//         (mid == e || arr[mid] >= arr[mid + 1])) {
//         return mid;
//     }

//     // If the middle element is not the peak and the element on the left is greater
//     // than the middle element, then the peak lies on the left side
//     if (mid > 0 && arr[mid] < arr[mid - 1]) {
//         return findPeakUtil(arr, s, mid - 1);
//     }

//     // Otherwise, the peak lies on the right side
//     return findPeakUtil(arr, mid + 1, e);
// }

// int findPeak(int arr[], int n) {
//     return findPeakUtil(arr, 0, n - 1);
// }

// int main() {
//     int arr[] = {1, 3, 8, 12, 4, 2};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int peakIndex = findPeak(arr, n);
//     cout << "Peak element is at index: " << peakIndex << endl;
//     cout << "Peak element is: " << arr[peakIndex] << endl;

//     return 0;
// }
//..................................................................................................
// #include <iostream>
// using namespace std;

// void print_Array(int arr[], int n) {
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << '\n';
// }

// int first_position(int arr[], int s, int e, int k) {
//     if (s > e) return -1;
//     int mid = s + (e - s) / 2;
//     if (arr[mid] == k) {
//         int ans = first_position(arr, s, mid - 1, k);
//         return (ans == -1) ? mid : ans;
//     } else if (k > arr[mid]) {
//         return first_position(arr, mid + 1, e, k);
//     } else {
//         return first_position(arr, s, mid - 1, k);
//     }
// }

// int last_position(int arr[], int s, int e, int k) {
//     if (s > e) return -1;
//     int mid = s + (e - s) / 2;
//     if (arr[mid] == k) {
//         int ans = last_position(arr, mid + 1, e, k);
//         return (ans == -1) ? mid : ans;
//     } else if (k > arr[mid]) {
//         return last_position(arr, mid + 1, e, k);
//     } else {
//         return last_position(arr, s, mid - 1, k);
//     }
// }

// int main() {
//     int even[9] = {2, 4, 6, 12, 12, 12, 12, 12, 18};
//     cout << "For array: ";
//     print_Array(even, 9);
//     int index1 = first_position(even, 0, 8, 12);
//     int index2 = last_position(even, 0, 8, 12);
//     cout << "First Index of 12 is: " << index1 << endl;
//     cout << "Last Index of 12 is: " << index2 << endl;

//     int odd[5] = {3, 8, 14, 14, 16};
//     cout << '\n';
//     cout << "For array: ";
//     print_Array(odd, 5);
//     int index3 = first_position(odd, 0, 4, 14);
//     int index4 = last_position(odd, 0, 4, 14);
//     cout << "First Index of 14 is: " << index3 << endl;
//     cout << "Last Index of 14 is: " << index4 << endl;

//     return 0;
// }
//.............................................................................................
// #include <iostream>
// using namespace std;
// int pivot(int *arr, int s, int e)
// {
//     if (s == e)
//         return s; // Base case: only one element left

//     int mid = s + (e - s) / 2;

//     // Check if mid is pivot
//     if (mid < e && arr[mid] > arr[mid + 1])
//     {
//         return mid + 1;
//     }
//     if (mid > s && arr[mid] < arr[mid - 1])
//     {
//         return mid;
//     }

//     // Decide whether to go to the left half or the right half
//     if (arr[mid] >= arr[s])
//     {
//         return pivot(arr, mid + 1, e); // Go to the right half
//     }
//     else
//     {
//         return pivot(arr, s, mid - 1); // Go to the left half
//     }
// }
// int main()
// {
//     int a[] = {8, 14, 16, 1, 3, 4, 5,6};

//     cout << "Pivot is: " << pivot(a, 0, 7);
//     return 0;
// }
// 2nd approach.....................................................................................
// #include <iostream>
// using namespace std;

// void print_Array(int arr[], int n) {
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << '\n';
// }

// int find_Pivot(int arr[], int s, int e) {
//     if (s >= e) {
//         return e;  // Base case: when search range is narrowed down to a single element
//     }

//     int mid = s + (e - s) / 2;

//     if (arr[mid] >= arr[0]) {
//         return find_Pivot(arr, mid + 1, e);  // Search in the right half
//     } else {
//         return find_Pivot(arr, s, mid);  // Search in the left half
//     }
// }

// int print_Pivot(int arr[], int n) {
//     return find_Pivot(arr, 0, n - 1);
// }

// int main() {
//     int a[5] = {8, 14, 16, 1, 3};
//     print_Array(a, 5);
//     cout << "Pivot is: " << print_Pivot(a, 5) << endl;
//     return 0;
// }
#include <iostream>
using namespace std;

long long int sqrtIntegerRecursive(int s, int e, int n, long long int ans) {
    if (s > e) {
        return ans;
    }

    long long int mid = s + (e - s) / 2;
    long long int square = mid * mid;

    if (square == n) {
        return mid;
    }

    if (square < n) {
        ans = mid;
        return sqrtIntegerRecursive(mid + 1, e, n, ans);
    } else {
        return sqrtIntegerRecursive(s, mid - 1, n, ans);
    }
}

long long int sqrtInteger(int n) {
    return sqrtIntegerRecursive(0, n, n, -1);
}

double more_PrecisionRecursive(int n, int precision, double ans, double factor) {
    if (precision == 0) {
        return ans;
    }

    for (double j = ans; j * j < n; j += factor) {
        ans = j;
    }

    return more_PrecisionRecursive(n, precision - 1, ans, factor / 10);
}

double more_Precision(int n, int precision, int tempSol) {
    return more_PrecisionRecursive(n, precision, tempSol, 1.0 / 10);
}

int main() {
    int a;
    cout << "Enter the number: ";
    cin >> a;
    int tempSol = sqrtInteger(a);
    cout << "Answer is: " << more_Precision(a, 3, tempSol);
    return 0;
}
