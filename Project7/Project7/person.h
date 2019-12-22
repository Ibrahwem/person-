#ifndef person_H
#define person_H
#include<iostream>
#include<string.h>
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
	friend istream& operator>>(std::istream& is, person& obj);
	 friend ostream& operator<<(ostream& os, const person& dt);
};
#endif