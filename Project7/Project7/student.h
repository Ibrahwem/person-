#ifndef Student_H
#define Student_H

#include "person.h"
#include <stdexcept>
using namespace std;
class Student:virtual public person
{
protected:
	string institute;
	int average;
public:
	Student() { institute = "Unknown"; average = 0; id = 0; age = 0; }
	Student(string INS,int AVR, int AGE, long ID);
	~Student() {}
	void print();
	friend class WorkingStudent;
};
#endif