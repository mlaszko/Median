#ifndef HEAP_H
#define HEAP_H


class Heap
{
public:
    Heap(bool maxHeap = true);
    int getRoot();
    int removeRoot();
    void insert(int x);
    void print();
    int getN() const;

private:
    int arraySize;
    int n;
    int *array;
    bool maxHeap;
    bool compare(int a, int b);
};

#endif // HEAP_H
