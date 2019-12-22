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

void person::print()
{
	cout << "age : " << age << endl;
	cout << "id : " << id << endl;
}


