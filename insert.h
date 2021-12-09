#ifndef __INSERT__
#define __INSERT__

#include <vector>
using namespace std;


void insert_sort(vector<int>& arr)
{
    for (int i = 1; i < arr.size(); i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j] < arr[j-1])
            {
                swap(arr[j], arr[j-1]); // insert sort is based on swap
            }else break;   
        }
    }
}


#endif