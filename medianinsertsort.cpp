#include "medianinsertsort.h"
#include <iostream>
#include <string.h>
using namespace std;

MedianInsertSort::MedianInsertSort()
{
    array = 0;
    arraySize = 100000;
    n = 0;
}

float MedianInsertSort::insert(int x)
{
    if(n == arraySize-1){
        arraySize *= 2;
        int *nArray = new int [arraySize];
        memcpy(nArray, array, n*sizeof(int));
        delete[] array;
        array = nArray;
    }

    if(n == 0){
        array = new int[arraySize];
        array[0] = x;
        ++n;
    }
    else{
        int i = n-1;
        while (i >= 0 && array[i] > x)
         {
             array[i+1] = array[i];
             --i;
         }
         array[i+1] = x;
         ++n;
    }

    if(n%2 == 0)
        return ((float)array[(n/2)-1] + (float)array[n/2]) / 2;
    else
        return array[n/2];
}

void MedianInsertSort::print()
{
    for(int i = 0; i < n; ++i){
        cout << array[i] << " ";
    }
    cout << endl;
}
