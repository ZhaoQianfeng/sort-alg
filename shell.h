/* shell sort implementation */

#ifndef __SHELL__
#define __SHELL__

#include <vector>
using namespace std;


void shell_sort(vector<int>& arr)
{
    // shell gap increment
    for (int gap = arr.size()/2; gap >= 1; gap /= 2)
    {
        for (int i = gap; i < arr.size(); i++)
        {
            for (int j = i; j >= gap; j-=gap)
            {   
                if (arr[j-gap] > arr[j])
                {
                    swap(arr[j], arr[j-gap]);
                }else break;    
            }
        }    
    }
}
#endif