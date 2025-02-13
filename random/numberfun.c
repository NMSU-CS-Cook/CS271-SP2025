//
// Fun with random numbers, arrays, and pointers
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// initially started with a SIZE constant but then did
// not use it for final dynamically allocated array
//#define SIZE 50

// function prototype (in class: vals can also be declared
// as "int* vals" because of pointer-array duality, and the
// fact that array arguments are "pass by pointer")
void printValues(int vals[], int size);

// Things that you type in on the command line after the 
// program name are the command line arguments, which come
// to main as argv, an array of char* (pointers to strings).
// argv[0] is the program name itself, so argv[1] is the first
// real command line argument. argc is the count, including
// the program name.
int main(int argc, char* argv[])
{
    int i, size;
    // int vals[SIZE]; // initially we used a declared local array
    int* pvals;
    // We also had a line "pvals = vals;" which showed that the name
    // of an array BY ITSELF is a pointer value to the beginning of 
    // the array. It is equivalent to "&vals[0]".
    
    // the line below converts the string command line argument to an
    // integer, but it is UNSAFE! We should really check argc to make
    // sure we have an argument. the library function atoi() works, but
    // the function strtol() is better.
    size = atoi(argv[1]); 
    // the line below calls the library function malloc() to allocate
    // a block of memory to hold an array of ints of _size_ # of elements
    pvals = (int*) malloc(size * sizeof(int));
    // set the random number seed to current # of seconds, an easy way 
    // to randomize
    srandom(time(NULL));
    // fill array with random values in range 1-100
    for (i=0; i < size; i++) {
       pvals[i] = (random() % 100) + 1;
    }
    // line below just demonstrates using array indexing on a pointer
    pvals[20] = 42;
    printValues(pvals, size); 
    return 0;
}

// Function printValues; you must pass the size of the
// array as a separate parameter; you can call this function
// with an point to int AS LONG AS you know that the pointer
// does indeed point to an array of _size_ # of values.
void printValues(int vals[], int size)  // pointer-array duality!!
{
    int i;
    for (i=0; i < size; i++) {
       printf("vals[%d] = %d\n", i, vals[i]);
    }
}


