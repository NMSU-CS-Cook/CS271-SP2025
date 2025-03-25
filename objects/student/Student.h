//
// Student class
//

#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student
{
 public:
   Student(std::string lastName, std::string firstName, int id);
   virtual std::string toString();
   virtual void addExtraCredit(int amount);
 protected:
   std::string lastName;           // DECIDING between private and
   std::string firstName;          // protected can be hard and requires
   int id;                         // foresight
   std::string major;
   int extraCredit;
};

#endif

