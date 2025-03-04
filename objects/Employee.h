//
// Employee class declaration
// - usually don't implement methods in a header file,
//   we just declare their interfaces (prototype)
//
//  Naming: Classes are new types, we usually capitalize them
//          Variables and functions/methods are usually lowercase
//    But: for both we use CamelCasing (camelCasing).

#ifndef EMPLOYEE_H  // make sure only included once
#define EMPLOYEE_H

class Employee // Employee is a new type name
{                       
 public:
   Employee(int id, std::string name, int wage);
   void printMe(void);
   void increaseWage(int amountInPennies);
 private:
   int id;
   std::string name;
   int hourlyWage;
};

#endif // EMPLOYEE_H





