#include "data_base.h"
#include "students.h"
#include <iostream>
using namespace std;


void data_base::add()
{
	string temp_name, temp_last, temp_age, temp_course;
	cout << "First name: ";
	cin >> temp_name;
	cout << "Last name : ";
	cin >> temp_last;
	cout << "Age: ";
	cin >> temp_age;
	cout << "Course: ";
	cin >> temp_course;
	student StudentObj(temp_name, temp_last, temp_last, temp_age);
	
	bd.push_back(StudentObj);
}

void data_base::list()
{
	cout << "students: ";
	for (int i = 0; i < bd.size(); i++) {
		cout << "Number of student : " << i << endl << " First Name: " << bd[i].get_name() << endl << " Last Name:" << bd[i].get_last_name() << endl << " Age: " << bd[i].get_age() << endl << " Course: " << bd[i].get_course() << endl;
		cout << endl;
	}
}

void data_base::delite()
{
	int temp_number;
	cout << "Number of student for delite: ";
	cin >> temp_number;
	bd.erase(bd.begin() + temp_number);
}

void data_base::edit()
{
	int temp_number;
	cout << "Enter number of student: ";
	cin >> temp_number;
	string temp_name, temp_last, temp_age, temp_course;
	cout << "First name: ";
	cin >> temp_name;
	bd[temp_number].set_name(temp_name);
	cout << "Last name : ";
	cin >> temp_last;
	bd[temp_number].set_last_name(temp_last);
	cout << "Age: ";
	cin >> temp_age;
	bd[temp_number].set_age(temp_age);
	cout << "Course: ";
	cin >> temp_course;
	bd[temp_number].set_course(temp_course);
}