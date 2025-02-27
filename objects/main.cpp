
#include <iostream>
#include <string>
#include "employee.h"

void outputEmployee(Employee& emp) // pass by reference parameter (&)
{                                  // ALWAYS use & on object parameters
   emp.increaseWage(15);
   emp.printMe();
}

int main()
{
   // create object and invoke constructor
   Employee jon(800146284,"Jon Cook",1125);
   // use method on the object
   jon.increaseWage(15);
   outputEmployee(jon);
   jon.printMe();
   // declare pointer to object (does NOT create an object)
   Employee* joe;
   // now create object and set pointer to point to it
   joe = new Employee(800937213, "Joe Cool", 1275);  // more like Java
   outputEmployee(*joe);
   joe->printMe(); // MUST USE -> on a pointer to an object
}







