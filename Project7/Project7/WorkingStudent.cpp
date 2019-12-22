#include "WorkingStudent.h"

WorkingStudent::WorkingStudent(bool same_ins, string ins, int AVR, float SAL, long ID, int Age) :employee(Age,ID,SAL), Student(ins, AVR,Age,ID),person(Age,ID)
{

}

void WorkingStudent::print()
{
	person::print();
	cout << "same_institute : " << same_institute << endl;
	cout << "same_ins : " << institute<<endl<<"average : "<< average << endl;
	cout << "salary : " << salary << endl;
}


