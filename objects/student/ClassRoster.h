//
// ClassRoster class
//

#ifndef CLASSROSTER_H
#define CLASSROSTER_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <stdlib.h>
#include "Student.h"

class ClassRoster
{
 public:
   void readDataFile(std::ifstream& inFile);
   void assignExtraCredit();
   void printStudents();
 private:
    std::vector<Student*> students;
};

#endif

