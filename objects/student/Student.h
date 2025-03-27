//
// Student class
//

#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <iostream>

class Student
{
 public:
   Student(std::string lastName, std::string firstName, int id);
   virtual std::string toString();
   virtual void addExtraCredit(int amount);
   friend std::ostream& operator<<(std::ostream& os, const Student& student);
 protected:
   std::string lastName;           // DECIDING between private and
   std::string firstName;          // protected can be hard and requires
   int id;                         // foresight
   std::string major;
   int extraCredit;
};

#endif

