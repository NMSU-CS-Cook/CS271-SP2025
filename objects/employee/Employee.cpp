//
// C++ Employee class example
//
// C++ Class   ==> describes an object that has both data and behavior
//                ==> putting these together is called ENCAPSULATION
//                ==> once we do this, we can HIDE our DATA!
//                    ==> textbook call this INFORMATION HIDING
//                ==> public things are the INTERFACE to an object
//                    private things are the INTERNAL REPRESENTATION 
//
// OOP == "Object Oriented Programming"
// OOP == Encapsulation, Inheritance, Polymorphism
//
#include <iostream>
#include <string>
#include "Employee.h"

Employee::Employee(int id, std::string name, int wage)
{
   this->id = id;      // in C++, this is a pointer!
   this->name = name;
   hourlyWage = wage;
}

void Employee::printMe(void) 
{
    std::cout << "Employee (" << name << ") ID:" << id 
              << " wage: " << hourlyWage/100.0 << "\n";
}

void Employee::increaseWage(int amountInPennies) 
{
    hourlyWage += amountInPennies;
}







