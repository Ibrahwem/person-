#include "person.h"
using namespace std;
person::person():age(0),id(0)
{
}

person::person(int age, long id)
{
	this->age = age;
	this->id = id;
}

person::person(const person &other)
{
	age = other.age;
	id = other.id;
}

istream& operator>>(std::istream& is, person& obj)
{
	cout << "Enter age:" << endl;
	is >> obj.age;
	cout << "Enter ID" << endl;
	is >> obj.id;
	return is;
}

ostream& operator<<(ostream& os, const person& dt)
{
	return os;
}
