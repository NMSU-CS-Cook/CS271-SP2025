/**
 * Student Program start
**/
#include <fstream>
#include "ClassRoster.h"
#include "StudentAthlete.h"

int main(int argc, char* argv[])
{
    // check to make sure we have one command line argument
    if (argc != 2) {
        std::cerr << "Error: a filename argument must be given\n";
        return -1;
    }
    std::ifstream inFile(argv[1]);
    if (!inFile) {
        std::cerr << "Error: file " << argv[1] << " cannot be opened\n";
        return -1;
    }
    ClassRoster* roster;
    roster = new ClassRoster();
    roster->readDataFile(inFile);
    inFile.close();
    roster->assignExtraCredit();
    roster->printStudents();
    // Student Athlete example
    StudentAthlete diego("Pavia", "Diego", 891, "football");
    std::cout << "Student Athlete is " << diego.toString() << "\n";
    Student* studentPointer;
    studentPointer = &diego;
    std::cout << "Diego through pointer: " << studentPointer->toString() << "\n";
    return 0;
}








