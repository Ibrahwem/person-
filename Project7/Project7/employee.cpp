#include "employee.h"

employee::employee(int AGE, long ID, float SAL):person(AGE,ID)
{
	salary = SAL;
}

istream& operator>>(std::istream& is, employee& obj)
{
	cout << "Enter the salary:" << endl;
	is >> obj.salary;
	return is;
}

ostream& operator<<(ostream& os, const employee& dt)
{
	// TODO: insert return statement here
	return os;
}
