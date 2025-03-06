//
// Student Class Implementation
//
#include "Student.h"

Student::Student(std::string lastName, std::string firstName, int id)
{
   this->lastName = lastName;
   this->firstName = firstName;
   this->id = id;
   major = "Computer Science";
   extraCredit = 0;
}

std::string Student::toString()
{
   return lastName+", "+firstName+" major:" + major + 
          " id:" + std::to_string(id) + 
          " extra credit: " + std::to_string(extraCredit);
}

void Student::addExtraCredit(int amount)
{
   extraCredit += amount;
}



