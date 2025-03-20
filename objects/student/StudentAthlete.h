//
// StudentAthlete class

// Inheritance: defining a class as a SUBclass of another class
//
//    INHERITANCE IS AN "IS-A" RELATIONSHIP!!!!!
//
//    An object of class StudentAthlete IS AN object of class Student
//

#ifndef STUDENTATHLETE_H
#define STUDENTATHLETE_H

#include <string>
#include "Student.h"

class StudentAthlete : public Student 
{
  public:
    StudentAthlete(std::string lastName, std::string firstName,
                   int id, std::string sport);
  private:
    std::string sport;
};

#endif








