
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printValues(int vals[], int size); // function prototype

int main(int argc, char* argv[])
{
    int i, size;
    int* pvals;
    size = atoi(argv[1]); // not safe but creates int from first argument
    pvals = (int*) malloc(size * sizeof(int));
    srandom(time(NULL));
    for (i=0; i < size; i++) {
       pvals[i] = (random() % 100) + 1;
    }
    pvals[20] = 42;
    printValues(pvals, size); 
    return 0;
}

void printValues(int vals[], int size)  // pointer-array duality!!
{
    int i;
    for (i=0; i < size; i++) {
       printf("vals[%d] = %d\n", i, vals[i]);
    }
}



