#include <iostream>
#include "merge.h"
#include "bubble.h"
#include "insert.h"
#include "selection.h"
#include "shell.h"
#include "quick.h"
#include "heap.h"
#include <cstdio>
using namespace std;


int main()
{
    vector<int> arr{3,2,4,1,8,5,777,5,123};
    heap_sort(arr);
    for (auto i: arr)
    {
        cout << i << " ";
    }
    return 0;
}