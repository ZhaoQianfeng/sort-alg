#ifndef __QUICK__
#define __QUICK__

#include <vector>
using namespace std;

// return the pivot index after partition
int partition(vector<int>&arr, int low, int high)
{
    int pivot = arr[high];
    int idx = low - 1;

    for (int i = low; i < high; i++)
    {
        if (arr[i] < pivot)
        {
            idx++;
            swap(arr[i], arr[idx]);
        }
    }
    // remember to swap pivot and arr[idx+1], otherwise pivot is not in correct position
    swap(arr[high], arr[idx+1]);
    return idx+1;
}

void _quick_sort(vector<int>& arr, int low, int high)
{
    if (low >= high)
        return;
    int mid = partition(arr, low, high);
    _quick_sort(arr, low, mid-1);
    _quick_sort(arr, mid+1, high);
}
void quick_sort(vector<int>& arr)
{
    _quick_sort(arr,0,arr.size()-1);
}
#endif 