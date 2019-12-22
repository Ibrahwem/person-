#ifndef WorkingStudent_H
#define WorkingStudent_H
#include"person.h"
#include "employee.h"
#include "Student.h"
#include<string.h>
#include<string>
using namespace std;
class WorkingStudent : public employee, public Student
{
private:
	bool same_institute=false;

public:
	WorkingStudent() { same_institute = false; institute = "Unknown"; average = 0; salary = 0; }
	WorkingStudent(bool same_ins, string ins, int AVR, float SAL, long ID, int Age);


};
#endif

