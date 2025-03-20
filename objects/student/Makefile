

student: main.o Student.o ClassRoster.o
	g++ -o $@ $?

Student.o: Student.h
main.o: ClassRoster.h Student.h
ClassRoster.o: ClassRoster.h Student.h

clean:
	rm *.o student

