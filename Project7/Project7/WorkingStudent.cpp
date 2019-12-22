#include "WorkingStudent.h"

WorkingStudent::WorkingStudent(bool same_ins, string ins, int AVR, float SAL, long ID, int Age) :employee(Age,ID,SAL), Student(ins, AVR,Age,ID)
{

}

istream& operator>>(std::istream& is, WorkingStudent& obj)
{
	cout << "Same institute";
	is >> obj.same_institute;
	return is;
}

ostream& operator<<(ostream& os, const WorkingStudent& dt)
{
	// TODO: insert return statement here
	return os;
}
