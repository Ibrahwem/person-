#include "student.h"
Student::Student(string INS, int AVR, int AGE, long ID):person(AGE,ID)
{
	institute = INS;
	average = AVR;
}