#include<iostream>
#include<vector>
using namespace std;
void Merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    // Resize nums1 to accommodate all elements
    nums1.resize(m + n);

    int i = m - 1;  // Initial index for nums1's original elements
    int j = n - 1;  // Initial index for nums2's elements
    int k = m + n - 1;  // Initial index for merged array

    // Merge in reverse order to avoid overwriting nums1's elements
    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k--] = nums1[i--];
        } else {
            nums1[k--] = nums2[j--];
        }
    }

    // Copy remaining elements of nums2, if any
    while (j >= 0) {
        nums1[k--] = nums2[j--];
    }
}
    
void print(vector<int>& nums1, int n) {
    for(int i=0; i<n; i++) {
        cout<< nums1[i] <<" ";
    }
    cout << endl;
}
int main(){
     vector<int>nums1={0,2,4,6,8};
     vector<int>nums2={1,3,5,7,9};
      Merge(nums1, 5, nums2, 5);

    print(nums1, 10);
    return 0;
}