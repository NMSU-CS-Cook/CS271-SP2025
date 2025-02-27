
//
//  Plain C Employee structure (data record)
//
#include <stdio.h>

// new data type
struct Employee {
   int id;
   char* name;
   int hourlyWage;  // in pennies!
};

int main()
{
   struct Employee jon;
   jon.id = 800534274;
   jon.name = "Jon Cook";
   jon.hourlyWage = 1125;
   printf("employee: (%s), id %d, wage %g\n",
          jon.name, jon.id, jon.hourlyWage/100.0);
}









