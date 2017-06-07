#ifndef INSERTSORTMEDIAN_H
#define INSERTSORTMEDIAN_H


class MedianInsertSort
{
public:
    MedianInsertSort();

    float insert(int x);
    void print();
private:
    int arraySize;
    int n;
    int *array;
};

#endif // INSERTSORTMEDIAN_H
