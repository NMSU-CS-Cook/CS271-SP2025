//
// C++ Employee class example
//
// C++ Class   ==> describing an object that has both data and behavior
//                ==> putting these together is called ENCAPSULATION
//                ==> once we do this, we can HIDE our DATA!
//                ==> public things are the INTERFACE to an object
//                    private things are the INTERNAL REPRESENTATION 
//
// OOP == Encapsulation, Inheritance, Polymorphism
//
#include <iostream>

class Employee // Employee is a new type name
{
 public:
   Employee(int p_id, char* p_name, int wage) {  // Constructor
      id = p_id; name = p_name; hourlyWage = wage;
   }
   void printMe(void) {
      std::cout << "Employee (" << name << ") ID:" << id 
                << " wage: " << hourlyWage/100.0 << "\n";
   }
 private:
   int id;
   char* name;
   int hourlyWage;
};

int main()
{
   // create object and invoke constructor
   Employee jon(800146284,"Jon Cook",1125);
   // use method on the objecty 
   jon.printMe();
   // declare pointer to object (does NOT create an object)
   Employee* joe;
   // now create object and set pointer to point to it
   joe = new Employee(800937213, "Joe Cool", 1275);  // more like Java
   joe->printMe(); // MUST USE -> on a pointer to an object
}







