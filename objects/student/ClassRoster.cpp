
#include "ClassRoster.h"


void ClassRoster::readDataFile(std::ifstream& inFile)
{
    std::string line;
    while (std::getline(inFile, line)) {
        if (line.length() < 2)
            continue; // probably at end of file
        //std::cout << "line: [" << line << "]\n";
        std::istringstream lineStream(line);
        std::string lastName;
        std::getline(lineStream, lastName, ' ');
        std::string firstName;
        std::getline(lineStream, firstName, ' ');
        std::string strId;
        std::getline(lineStream, strId, ' ');
        int id = std::stoi(strId);
        //std::cout << "Student: " << lastName << " " 
        //          << firstName << " " << id << "\n";
        Student* student = new Student(lastName, firstName, id);
        students.push_back(student);
    }
}

void ClassRoster::printStudents()
{
    std::cout << "Data printout for " << students.size() << " students\n";
    for (Student* student: students) {
        std::cout << "student: (" << student->toString() << ")\n";
    }
}

void ClassRoster::assignExtraCredit()
{
    for (Student* student: students) {
        int randVal = random()*1000;
        if (randVal < 100) {
            student->addExtraCredit(1);
        }
    }
}




