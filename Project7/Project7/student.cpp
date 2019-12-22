#include "student.h"
Student::Student(string INS, int AVR, int AGE, long ID):person(AGE,ID)
{
	institute = INS;
	average = AVR;
}

istream& operator>>(std::istream& is, Student& obj)
{
	cout << "Enter institute name:" << endl;
	is >> obj.institute;
	cout << "Enter the average:" << endl;
	is >> obj.average;
	return is;
}

ostream& operator<<(ostream& os, const Student& dt)
{
	// TODO: insert return statement here
	return os;
}
