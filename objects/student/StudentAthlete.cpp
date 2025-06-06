
#include "StudentAthlete.h"

StudentAthlete::StudentAthlete(std::string lastName, std::string firstName,
                               int id, std::string sport) :
                Student(lastName, firstName, id)
{
   this->sport = sport;
}

std::string StudentAthlete::toString()
{
   return firstName + " " + lastName + " is an athlete in " + 
          sport + " and majors in " + major;
}

std::ostream& operator<<(std::ostream& os, const StudentAthlete& student)
{
   os <<  student.firstName << " " << student.lastName 
      <<  " is an athlete in " << student.sport << " and majors in "
      <<  student.major;
   return os;
}

