

student: main.o Student.o ClassRoster.o StudentAthlete.o
	g++ -o $@ $?

Student.o: Student.h
main.o: ClassRoster.h Student.h
ClassRoster.o: ClassRoster.h Student.h

clean:
	rm -f *.o student

