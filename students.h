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
    // ��������� ����� ��������
    void set_name(string);
    // ��������� ����� ��������
    string get_name();
    // ��������� ������� ��������
    void set_last_name(string);
    // ��������� ������� ��������
    string get_last_name();
    // ��������� �������� ��������
    void set_age(string);
    // ��������� �������� ��������
    string get_age();
    // ��������� ����� ��������
    void set_course(string);
    // ��������� ����� ��������
    string get_course();
private:
	string name, second, age, course;

};