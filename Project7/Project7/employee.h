#ifndef employee_H
#define employee_H
#include<iostream>
#include "person.h"
#include<string.h>
#include<string>
using namespace std;
class employee:public person
{
protected:
	float salary;
public:
	employee() { salary = 0; id = 0; age = 0; }//default constructor
	employee(int AGE, long ID,float SAL);//constructor
};
#endif