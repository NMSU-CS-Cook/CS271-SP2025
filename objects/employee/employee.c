
//
//  Plain C Employee structure (data record)
//  - structured data in non-OO languages let you
//    created complex data records, but do not let you
//    include methods in them (which is what objects do)
//  - this means there is no private/public distinction
//
#include <stdio.h>
#include <stdlib.h>

// typedef int feet; // declares "feet" as a new type name, == int

// new data type
typedef struct Employee {
   int id;
   char* name;
   int hourlyWage;  // in pennies!
} Employee; // now Employee is a new type name all by itself

int main()
{
   Employee jon;
   jon.id = 800534274;
   jon.name = "Jon Cook";
   jon.hourlyWage = 1125;
   printf("employee: (%s), id %d, wage %g\n",
          jon.name, jon.id, jon.hourlyWage/100.0);

   Employee* joe;
   joe = (Employee*) malloc(sizeof(Employee)); // no "new" in C!
   joe->id = 80023876;
   joe->name = "Joe Cool";
   joe->hourlyWage = 1275;
   printf("employee: (%s), id %d, wage %g\n",
          joe->name, joe->id, joe->hourlyWage/100.0);
          
   //feet depth;
   //depth = 22;
   //printf("depth = %d\n", depth);
}















