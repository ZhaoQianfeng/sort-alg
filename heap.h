#ifndef __HEAP__
#define __HEAP__
#include <vector>
using namespace std;

void heapify(vector<int>& arr, int start, int end)
{
    int largest = start;
    if (2*start+1 <=end && arr[2*start+1] > arr[largest])
    {
        largest = 2*start + 1;
    }
    if (2*start+2 <= end && arr[2*start+2] > arr[largest])
    {
        largest = 2*start + 2;
    }
    if ( largest != start)
    {
        swap(arr[largest], arr[start]);
        heapify(arr, largest, end);
    }
}

void heap_sort(vector<int>& arr)
{
    // build a heap
    for (int i = (arr.size()-2) / 2; i >= 0; i--)
    {
        heapify(arr, i, arr.size()-1);
    }
    // sort one by one 
    for (int i = arr.size()-1; i > 0; i--)
    {
        swap(arr[0], arr[i]);
        heapify(arr, 0, i-1);
    }
}

#endif