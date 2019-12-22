#include "WorkingStudent.h"

int main()
{
	person **arr;
	int size;
	cout << "Enter the number of persons"<<endl;
	cin >> size;
	arr = new person*[size];
	for (int i = 0; i < size; i++)
	{
		int type,age,avg;
		long id;
		float salary;
		string ins;
		bool si;
		cout << "Person #" << i + 1 << endl;
		cout << "enter person type:(1 for employee,2 for student,3 for working student)"<<endl;
		cin >> type;
		switch (type) {
		case 1:
			cout << "Enter age:" << endl;
			cin >> age;
			cout << "Enter ID" << endl;
			cin >> id;
			cout << "Enter the salary:" << endl;
			cin >> salary;

			arr[i] = new employee(age,id,salary);
			break;
		case 2:
			cout << "Enter age:" << endl;
			cin >> age;
			cout << "Enter ID" << endl;
			cin >> id;
			cout << "Enter institute name:" << endl;
			cin >> ins;
			cout << "Enter the average:" << endl;
			cin >> avg;
			arr[i] = new Student(ins,avg,age,id);
			break;
		case 3:
			cout << "Enter age:" << endl;
			cin >> age;
			cout << "Enter ID" << endl;
			cin >> id;
			cout << "Enter the salary:" << endl;
			cin >> salary;
			cout << "Enter institute name:" << endl;
			cin >> ins;
			cout << "Enter the average:" << endl;
			cin >> avg;
			cout << "Same institute(1/0):";
			cin >> si;
			arr[i] = new WorkingStudent(si,ins,avg,salary,id,age);
			break;
		}
	}
	return 0;
}