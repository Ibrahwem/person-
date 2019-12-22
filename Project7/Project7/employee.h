#ifndef employee_H
#define employee_H

#include "person.h"
using namespace std;
class employee:virtual public person
{
protected:
	float salary;
public:
	employee() { salary = 0; id = 0; age = 0; }//default constructor
	employee(int AGE, long ID,float SAL);//constructor
	~employee() {}
	void print();
	friend class WorkingStudent;
};
#endif