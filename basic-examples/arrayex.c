//
// Initial Array Examples
//
// Compile as:
//    gcc -Wno-sizeof-array-argument -o arrayex arrayex.c
// to avoid the warning from the sizeof() in the 
// printArray() function. (or just ignore the warning)
//
#include <stdio.h>

// defining the size of our array as a constant
// allows us to not hardcode "5" everywhere in 
// our code. A good practice!
#define SIZE 5

// This function prints the values in the array
// - the first printf demonstrates that the 
//   function does NOT know the size of the array;
//   the array is passed kind of "by reference",
//   but really it is a pointer to the array
// - the true size (number of elements) of the array
//   is passed as a separate argument
void printArray(int vals[], int size)
{
   int i=0;
   printf("PA: sizeof(vals)=%lu\n",sizeof(vals));
   while (i < size) {
       printf("vals[%d]=%d\n",i,vals[i]);
       i++;
   }
}

//
// Main function
//
int main(int argc, char** argv)
{
   int i;            // declares an int variable
   int vals[SIZE];  // declares an array of ints
   
   // sizeof() is a COMPILE-time operator 
   // that gives you the number of bytes needed
   // to store a variable; in this context, since
   // the array is declared in this context, it does
   // give us the total number of bytes the array 
   // occupies. The printArray() function demonstrates
   // that this DOES NOT work when the array is passed
   // as an argument
   printf("sizeof(vals)=%lu\n", sizeof(vals));
   
   // We can use sizeof() to compute the number of elements,
   // just divide by how many bytes each element takes
   printf("#elements in vals: %lu\n", sizeof(vals) / sizeof(int));

   // initialize the array with some values, then print it
   for (i=0; i < SIZE; i++) {
       vals[i] = 100 + i;
   }
   printArray(vals, SIZE);
   return 0;
}















