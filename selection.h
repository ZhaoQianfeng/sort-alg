#ifndef __SELECTION__
#define __SELECTION__

#include <vector>
using namespace std;

void selection_sort(vector<int>& arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        int min_idx = i;
        for(int j = i+1; j < arr.size(); j++)
        {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        swap(arr[i],arr[min_idx]); // swap
    }
}

#endif