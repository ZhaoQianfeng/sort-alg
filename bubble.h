#ifndef __BUBBLE__
#define __BUBBLE__

#include <vector>
#include <algorithm>
using namespace std;

void bubble_sort(vector<int>& arr)
{
    for (int i = 0; i < arr.size() -1 ; i++)
    {
        bool swaped = false;
        for (int j = 0; j < arr.size()-1-i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                swaped = true;
            }
        }
        if (!swaped)
        {
            break;
        }
    }
}


#endif