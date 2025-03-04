//
// Example of a vector of references rather than a vector of
// pointers. It is NOT INVISIBLE -- C++ vectors do not directly
// handle references, but the template type std::reference_wrapper
// enables you to create what ALMOST behaves as a vector of 
// references. See the comments in the code below.
//

#include <iostream>
#include <string>
#include <functional>
#include <vector>

#include "Employee.h"  // include Employee class declaration

void outputEmployee(Employee& emp) // pass by reference parameter (&)
{                                  // ALWAYS use & on object parameters
   emp.increaseWage(15);
   emp.printMe();
}

int main()
{
   // Create a vector object to hold Employee "references"
   std::vector<std::reference_wrapper<Employee>> employees;
   
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
   
   employees.push_back(jon);   // object references are used in the
   employees.push_back(*joe);  // vector, so it is "pass by reference"
   std::cout << "Use the vector\n";
   employees[1].get().printMe();   // when indexing the vector, you have to
   employees[0].get().printMe();   // use "get()" to get the object reference
   std::cout << "Counting loop:\n";
   for (int i=0; i < employees.size(); i++) {
      employees[i].get().printMe(); 
   }
   std::cout << "Iterator loop\n";
   // BUT when using an iterator loop, you can just use
   // references directly. This is NICE
   for (Employee& employee : employees) {
      employee.printMe();
   }
}







