#ifndef Student_H
#define Student_H
#include<iostream>
#include<string>
#include "person.h"
#include<string.h>
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
	friend istream& operator>>(std::istream& is, Student& obj);
	friend ostream& operator<<(ostream& os, const Student& dt);
};
#endif