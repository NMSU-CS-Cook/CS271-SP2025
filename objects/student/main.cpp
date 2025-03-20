/**
 * Student Program start
**/
#include <fstream>
#include "ClassRoster.h"

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
    ClassRoster roster;
    roster.readDataFile(inFile);
    inFile.close();
    roster.assignExtraCredit();
    roster.printStudents();
    return 0;
}








