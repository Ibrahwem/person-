#ifndef person_H
#define person_H
#include<iostream>
#include<string>
using namespace std;
class person
{
protected:
	int age;
	long id;
public:
	person();//default constructor
	person(int age, long id);//constructor
	virtual ~person() {};//destructor
	person(const person &);//copy constructor

	virtual void print();
};
#endif