#include <iostream>
#include "data_base.h"
#include "students.h"
#include <vector>
using namespace std;
int main()
{
	data_base bdObj;
	string command;

	cout << "Available commands: add, check, delite, edit, exit " << endl << "Enter command: ";
	while (true) {
		cin >> command;
		if (command == "add" || command == "ADD") {
			bdObj.add();
		}
		else if (command == "check" || command == "CHECK") {
			bdObj.list();
		}
		else if (command == "delete" || command == "DELETE") {
			bdObj.delite();
		}
		else if (command == "edit" || command == "EDIT") {
			bdObj.edit();
		}
		else if (command == "exit" || command == "EXIT") {
			return 0;
		}
		else {
			cout << "Wrong command!" << endl;
		}
	}
}
	
 