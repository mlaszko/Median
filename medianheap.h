#ifndef MEDIANHEAP_H
#define MEDIANHEAP_H

#include "heap.h"

class MedianHeap
{
public:
    MedianHeap();

    void print();
    float insert(int x);

private:
    Heap *maxHeap;
    Heap *minHeap;
};

#endif // MEDIANHEAP_H
