#include "student.h"
Student::Student(string INS, int AVR, int AGE, long ID):person(AGE,ID)
{
	institute = INS;
	average = AVR;
}

void Student::print()
{
	person::print();
	cout << "institute : " << institute << endl;
	cout << "average : " << average << endl;
}


