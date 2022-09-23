#pragma once
#include <iostream>
using namespace std;

class student
{
public:
    student(string n, string l, string a, string c){
        name = n;
        second = l;
        age = a;
        course = c;
    };
    // Установка имени студента
    void set_name(string);
    // Получение имени студента
    string get_name();
    // Установка фамилии студента
    void set_last_name(string);
    // Получение фамилии студента
    string get_last_name();
    // Установка возраста студента
    void set_age(string);
    // Получение возраста студента
    string get_age();
    // Установка курса студента
    void set_course(string);
    // Получение курса студента
    string get_course();
private:
	string name, second, age, course;

};