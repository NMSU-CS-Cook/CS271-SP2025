//
// Very initial pointer example
//
#include <stdio.h>

// all global variables in C are initialized to "zero"
// (all zero bits); local variables are NOT initialized at all
int x;
int arr[4];
int* p;      // p is a variable that holds a POINTER to an int

//
// Some example pointer code
//
int main(int argc, char** argv)
{
   printf("var x = %d\n", x);
   printf("arr[2] = %d\n", arr[2]);
   // %p in printf() prints out a hexadecimal 
   // representation of a pointer value
   printf("p = %p\n", p); // p is "nil", all 0 bits 
   // the next statement assigns a pointer value to p; we
   // call the & operator "address of", and on real computers
   // a pointer value really is a memory address
   p = &x;
   // after the statement above, p points to the variable x
   // * is a "follow the pointer" operator, which we call
   // "dereferencing a pointer"; it takes us to the thing the
   // pointer is pointing to; since p is pointing to the variable
   // x at this point, the statement below assigns 42 to x!
   *p = 42;
   printf("my int variable contains %d\n", *p); 
   printf("var x = %d\n", x);
   printf("p = %p\n", p); // this shows you the address of x!
   return 0;
}

