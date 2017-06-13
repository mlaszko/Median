#include "medianheap.h"
#include <iostream>

using namespace std;

MedianHeap::MedianHeap()
{
    maxHeap = new Heap<MAX>();
    minHeap = new Heap<MIN>();
}

void MedianHeap::print()
{
    maxHeap->print();
    minHeap->print();
}

float MedianHeap::insert(int x)
{
    if(maxHeap->getN() == 0){
        maxHeap->insert(x);
    }
    else if(minHeap->getN() == 0){
        if(x > maxHeap->getRoot())
            minHeap->insert(x);
        else
            maxHeap->insert(x);
    }
    else{
        if(x < minHeap->getRoot())
            maxHeap->insert(x);
        else
            minHeap->insert(x);
    }
    if(minHeap->getN() - maxHeap->getN() > 1){
        int r = minHeap->removeRoot();
        maxHeap->insert(r);
    }
    else if(maxHeap->getN() - minHeap->getN() > 1){
        int r = maxHeap->removeRoot();
        minHeap->insert(r);
    }

//    cout << "Max ";
//    maxHeap->print();
//    cout << "Min ";
//    minHeap->print();

    if(maxHeap->getN() == minHeap->getN())
        return ((float)maxHeap->getRoot() + (float)minHeap->getRoot()) / 2;
    else if(maxHeap->getN() > minHeap->getN())
        return maxHeap->getRoot();
    else
        return minHeap->getRoot();

}
