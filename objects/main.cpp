//
// Main program for employee example
//

#include <iostream>
#include <string>
#include <vector>

#include "Employee.h"  // include Employee class declaration

void outputEmployee(Employee& emp) // pass by reference parameter (&)
{                                  // ALWAYS use & on object parameters
   emp.increaseWage(15);
   emp.printMe();
}

int main()
{
   // Create a vector object to hold Employees
   std::vector<Employee*> employees;
   
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
   
   employees.push_back(&jon);
   employees.push_back(joe);
   std::cout << "Use the vector\n";
   employees[1]->printMe();
   employees[0]->printMe();
   std::cout << "Counting loop:\n";
   for (int i=0; i < employees.size(); i++) {
      employees[i]->printMe();
   }
   std::cout << "Iterator loop\n";
   for (Employee* employee : employees) {
      employee->printMe();
   }
}







