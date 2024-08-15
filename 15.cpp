// #include <iostream>
// #include <algorithm> // for max_element

// using namespace std;

// bool isPossible(int arr[], int n, int m, int mid)
// {
//     int woodCollected = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > mid)
//         {
//             woodCollected += arr[i] - mid;
//         }
//     }
//     return woodCollected >= m;
// }

// int main()
// {
//     int arr[] = {20, 15, 10, 17};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int m = 7;

//     int s = 0;
//     int a = -1;
//     for (int i = 0; i < n; i++)
//     {
//         a = max(a, arr[i]);
//     }
//     int e = a;

//     int ans = -1;
//     int mid = s + (e - s) / 2;

//     while (s <= e)
//     {
//         if (isPossible(arr, n, m, mid))
//         {
//             ans = mid;
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid - 1;
//         }
//         mid = s + (e - s) / 2;
//     }
//     cout << ans << endl;

//     return 0;
// }
// #include <iostream>
// #include <algorithm>
// #include <vector>

// using namespace std;

// bool isPossible(vector<int>& arr, int n, int m, int mid) {
//     int woodCollected = 0;
//     for (int i = 0; i < n; i++) {
//         if (arr[i] > mid) {
//             woodCollected += arr[i] - mid;
//         }
//     }
//     return woodCollected >= m;
// }

// int maxHeight(vector<int>& arr, int n, int m) {
//     int s = 0;
//     int e = *max_element(arr.begin(), arr.end()); // Find the maximum height in the array
//     int ans = -1;
//     int mid = s + (e - s) / 2;
    
//     while (s <= e) {
//         if (isPossible(arr, n, m, mid)) {
//             ans = mid;
//             s = mid + 1; // Try for a higher cut
//         } else {
//             e = mid - 1; // Try for a lower cut
//         }
//         mid = s + (e - s) / 2;
//     }
//     return ans;
// }

// int main() {
//     int n, m;

//     // Input number of elements in array
//     cout << "Enter number of elements in array: ";
//     cin >> n;

//     vector<int> arr(n);

//     // Input elements of array
//     cout << "Enter the elements of the array: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     // Input required amount of wood
//     cout << "Enter the required amount of wood: ";
//     cin >> m;

//     int result = maxHeight(arr, n, m);
//     cout << "Maximum height at which trees can be cut: " << result << endl;

//     return 0;
// }
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

bool canCookPratas(int pratas, vector<int>& cooks, int time) {
    int totalPratas = 0;
    for (int cook : cooks) {
        int t = 0, count = 0, j = 1;
        while (t + j * cook <= time) {
            t += j * cook;
            count++;
            j++;
        }
        totalPratas += count;
        if (totalPratas >= pratas) {
            return true;
        }
    }
    return false;
}

int minTimeToCookPratas(int pratas, vector<int>& cooks) {
    int left = 0;
    int right = *max_element(cooks.begin(), cooks.end()) * pratas * (pratas + 1) / 2;
    int answer = right;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (canCookPratas(pratas, cooks, mid)) {
            answer = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    
    return answer;
}

int main() {
    int pratas, n;
    cout << "Enter the number of pratas: ";
    cin >> pratas;
    cout << "Enter the number of cooks: ";
    cin >> n;
    vector<int> cooks(n);
    cout << "Enter the ranks of the cooks: ";
    for (int i = 0; i < n; i++) {
        cin >> cooks[i];
    }
    cout << "Minimum time required: " << minTimeToCookPratas(pratas, cooks) << endl;
    return 0;
}

