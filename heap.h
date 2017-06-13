#ifndef HEAP_H
#define HEAP_H


class Heap
{
public:
    Heap();
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
protected:
    virtual bool compare(int a, int b) = 0;
};


class MinHeap : public Heap{
    bool compare(int a, int b);
};

class MaxHeap : public Heap{
    bool compare(int a, int b);
};

#endif // HEAP_H
