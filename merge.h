#ifndef __MERGE__
#define __MERGE__

#include <vector>
using namespace std;

void _merge_sort(vector<int>&arr, int left, int right, vector<int>& buf);
void _merge(vector<int>& a, int left, int mid, int right,  vector<int>& buf);

void merge_sort(vector<int>& arr)
{
    vector<int> buf(arr.size());
    _merge_sort(arr, 0, arr.size()-1, buf);
    copy(buf.begin(), buf.end(), arr.begin());
}

void printarr(vector<int>&arr)
{
    for(auto i: arr)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void _merge_sort(vector<int>&arr, int left, int right, vector<int>& buf)
{
    // only one element
    if (left == right)
        return;
    else
    {
        int mid = left + (right-left) / 2;
        _merge_sort(arr, left, mid, buf);
        _merge_sort(arr, mid+1, right, buf);
        _merge(arr, left, mid, right, buf);
    }
}

// merge two sorted array
void _merge(vector<int>& a, int left, int mid, int right,  vector<int>& buf)
{
    int start1 = left, start2 = mid+1;
    int end1 = mid, end2 = right;
    int buf_start = left;
    while(start1<=end1 && start2<=end2)
    {
        if (a[start1] <= a[start2])
            buf[buf_start++] = a[start1++];
        else if (a[start2] < a[start1])
            buf[buf_start++] = a[start2++];
    }
    while (start1 <= end1)
    {
        buf[buf_start++] = a[start1++];
    }
    while (start2 <= end2)
    {
        buf[buf_start++] = a[start2++];
    }
    // rewrite to a
    for (int i = left; i <= right; i++)
    {
        a[i] = buf[i];
    }
}

#endif