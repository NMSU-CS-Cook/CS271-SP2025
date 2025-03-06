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
   std::string toString();
   void addExtraCredit(int amount);
 private:
   std::string lastName;
   std::string firstName;
   int id;
   std::string major;
   int extraCredit;
};

#endif

