#include <iostream>
#include <string.h>
#include "medianheap.h"
#include "medianinsertsort.h"
using namespace std;

int main(int argc, char *argv[])
{
    if(argc > 1 && strcmp(argv[1], "-i") == 0){
        MedianInsertSort mis;
        int in;
        while(cin >> in){
            cout << mis.insert(in) <<endl;
        }
    }
    else{
        MedianHeap mh;
        int in;
        while(cin >> in){
            cout << mh.insert(in) << endl;
        }
    }

    return 0;
}
