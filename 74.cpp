#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

class heap
{
public:
    int arr[100];
    int size = 0;

    heap()
    {
        arr[0] = -1;
        size = 0;
    }

    void insert(int val)
    {
        size = size + 1;
        int index = size;
        arr[index] = val;

        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
            }
            else
            {
                return;
            }
        }
    }
    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void deleteFromHeap()
    {
        if (size == 0)
        {
            cout << "Nothing to delete" << endl;
            return;
        }
        arr[1] = arr[size];
        size--;

        int i = 1;
        while (i < size)
        {
            int li = 2 * i;
            int ri = 2 * i + 1;

            if (li < size && arr[i] < arr[li])
            {
                swap(arr[i], arr[li]);
                i = li;
            }
            else if (ri < size && arr[i] < arr[ri])
            {
                swap(arr[i], arr[ri]);
                i = ri;
            }
            else
            {
                return;
            }
        }
    }
};

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;
    if (left <= n && arr[largest] < arr[left])
    {
        largest = left;
    }
    if (right <= n && arr[largest] < arr[right])
    {
        largest = right;
    }

    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n)
{
    int size = n;
    while (size > 1)
    {
        swap(arr[size], arr[1]);
        size--;
        heapify(arr, size, 1);
    }
}

int main()
{
    heap h;
    h.insert(65);
    h.insert(45);
    h.insert(35);
    h.insert(60);
    h.insert(30);
    h.insert(50);
    h.insert(55);
    h.print();
    h.deleteFromHeap();
    h.print();

    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int n = 5;
    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr, n, i);
    }
    cout << "printing the array now: " << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    heapSort(arr, n);
    cout << "printing the sorted array now: " << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<"\nusing priority queue here "<<endl;
    //max heap
    priority_queue<int> pq;
    pq.push(6);
    pq.push(8);
    pq.push(13);
    pq.push(9);
    cout<<"element at top "<<pq.top()<<endl;
    pq.pop();
    cout<<"element at top "<<pq.top()<<endl;
    cout<<"Size is "<<pq.size()<<endl;
    if(pq.empty()){
        cout<<"pq is empty"<<endl;
    }
    else{
        cout<<"pq is not empty"<<endl;
    }

    //min heap
    cout<<'\n';
     priority_queue<int,vector<int>,greater<int> > minheap;
    minheap.push(6);
    minheap.push(8);
    minheap.push(13);
    minheap.push(9);
    cout<<"element at top "<<minheap.top()<<endl;
    minheap.pop();
    cout<<"element at top "<<minheap.top()<<endl;
    cout<<"Size is "<<minheap.size()<<endl;
    if(pq.empty()){
        cout<<"minheap is empty"<<endl;
    }
    else{
        cout<<"minheap is not empty"<<endl;
    }
    
    return 0;
}