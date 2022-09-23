#include "students.h"
#include <iostream>
#include <string>

void student::set_name(string student_name)
{
	name = student_name;
}

string student::get_name()
{
	return name;
}

void student::set_last_name(string student_last_name)
{
	second = student_last_name;
}

string student::get_last_name()
{
	return name;
}

void student::set_age(string student_age)
{
	age = student_age;
}

string student::get_age()
{
	return age;
}

void student::set_course(string student_course)
{
	course = student_course;
}

string student::get_course()
{
	return course;
}
