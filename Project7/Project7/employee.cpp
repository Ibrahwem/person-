#include "employee.h"

employee::employee(int AGE, long ID, float SAL):person(AGE,ID)
{
	salary = SAL;
}

void employee::print()
{
	person::print();
	cout << "salary : " << salary << endl;
}


