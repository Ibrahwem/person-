#include "person.h"
using namespace std;
person::person()
{
	cout << "please enter the person id";
		cin >> id;
		cout << "please enter the person age";
			cin >> age;
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
