/**
 * Student Program start
**/
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <stdlib.h>
#include "Student.h"

void readDataFile(std::ifstream& inFile, std::vector<Student*>& students);
void assignExtraCredit(std::vector<Student*>& students);
void printStudents(std::vector<Student*>& students);

int main(int argc, char* argv[])
{
    // check to make sure we have one command line argument
    if (argc != 2) {
        std::cerr << "Error: a filename argument must be given\n";
        return -1;
    }
    std::vector<Student*> students;
    std::ifstream inFile(argv[1]);
    if (!inFile) {
        std::cerr << "Error: file " << argv[1] << " cannot be opened\n";
        return -1;
    }
    // now we have an open file, so read it in and get our data 
    //std::cout << "Reading the data file....";
    readDataFile(inFile, students);
    inFile.close();
    //std::cout << "done.\n";
    assignExtraCredit(students);
    printStudents(students);
    return 0;
}

void readDataFile(std::ifstream& inFile, std::vector<Student*>& students)
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

void printStudents(std::vector<Student*>& students)
{
    std::cout << "Data printout for " << students.size() << " students\n";
    for (Student* student: students) {
        std::cout << "student: (" << student->toString() << ")\n";
    }
}

void assignExtraCredit(std::vector<Student*>& students)
{
    for (Student* student: students) {
        int randVal = random()*1000;
        if (randVal < 100) {
            student->addExtraCredit(1);
        }
    }
}




