#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& arr, int n)
{   
    for(int i = 1; i < n; i++) {
        // For round 1 to n-1
        bool swapped = false;
        
        for(int j = 0; j < n-i; j++) {
            // Process element till n-i th index
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        
        if(!swapped) {
            // Already sorted
            break;
        }
    }
}

int main() {
    vector<int> arr = {64, 25, 12, 22, 11};
    int n = arr.size();
    
    cout << "Original array: ";
    for(int i = 0; i < n; i++)
    cout << arr[i] << " ";  
    cout << endl;
    
    bubbleSort(arr, n);
    
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    
    return 0;
}
