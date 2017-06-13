#ifndef HEAP_H
#define HEAP_H

#include <iostream>
#include <string.h>
using namespace std;

enum HeapType {MIN, MAX};

template<HeapType HT>
class Heap
{
public:
    Heap(){
        array = 0;
        arraySize = 100000;
        n = 0;
    }
    int getRoot(){return array[1];}
    int removeRoot(){
        int root = array[1];
        array[1] = array[n];
        array[n] = root;
        int i = n;
        int j = 1;
        int k = 2;
        int m;
        while(k < i)
        {
          if((k + 1 < i) && (compare(array[k], array[k + 1])))
            m = k + 1;
          else
            m = k;
          if(compare(array[m], array[j])) break;
          swap(array[j], array[m]);
          j = m; k = j + j;
        }
        n--;
        return root;
    }

    void insert(int x){
        if(n == arraySize-1){
            arraySize *= 2;
            int *nArray = new int [arraySize];
            memcpy(nArray, array, (n+1)*sizeof(int));
            delete[] array;
            array = nArray;
        }

        if(array == 0){
            array = new int[arraySize];
            array[0] = 0;
            array[1] = x;
            ++n;
        }
        else{
            ++n;
            int j = n;
            int k = j / 2;
            while((k > 0) && (compare(array[k], x)))
            {
              array[j] = array[k];
              j = k; k = j / 2;
            }
            array[j] = x;
        }
    }

    void print(){
        for(int i = 1; i <= n; ++i){
            if((i & (i - 1)) == 0){
                cout << endl;
            }
            cout << array[i] << " ";
        }
        cout << endl;
    }

    int getN() const{return n;}

private:
    int arraySize;
    int n;
    int *array;

    bool compare(int a, int b){
        if(HT == MAX)
            return a < b;
        else
            return a > b;
    }
};

#endif // HEAP_H
