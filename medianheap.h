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
    Heap<MAX> *maxHeap;
    Heap<MIN> *minHeap;
};

#endif // MEDIANHEAP_H
