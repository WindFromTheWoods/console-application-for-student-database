#include <iostream>
#include "data_base.h"
#include "students.h"
#include <vector>
using namespace std;
int main()
{
	data_base bdObj;
	int operation;
	cout << "1. Add student" << endl;
	cout << "2. Check students" << endl;
	cout << "3. Delite student" << endl;
	cout << "4. Edit student" << endl;
	cout << "9. Exit" << endl;
	while (true) {
		cin >> operation;
		if (operation == 1) {
			bdObj.add();
		}
		else if (operation == 2) {
			bdObj.list();
		}
		else if (operation == 3) {
			bdObj.delite();
		}
		else if (operation == 4) {
			bdObj.edit();
		}
		else if (operation == 9) {
			return 0;
		}
	}
}
	
 