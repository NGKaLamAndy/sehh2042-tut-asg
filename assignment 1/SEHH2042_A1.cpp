// SEHH2042 Assignment 1
// Program template file
// Do not modify the given codes

// =======================================
// Insert more header files when necessary
// =======================================
#include <iostream>
#include <iomanip>
using namespace std;

void showInfo()
{
	// Fill in your personal particulars here
	cout << "Name      : HIDDEN\n";
	cout << "Student ID: HIDDEN\n";
	cout << "Class     : B01D\n";
}

void Q1()
{
	// Insert your code for Question 1 here
	int input;
	int sum = 0;
	int count1 = 0;
	int count2 = 0;

	cin >> input;

	for (int i = 1; i > 0; i++) {
		if (input > 0 && input % 2 != 0) {
			sum += input;
			count1++;
		}
		else if (input < 0 && input % 2 == 0) {
			sum += input;
			count2++;
		}
		else if (input == 0) {
			cout << count1 << endl;
			cout << count2 << endl;
			cout << sum << endl;
			break;
		}
		cin >> input;
	}
}

void Q2()
{
	// Insert your code for Question 2 here
	char chartype;
	int start, end, hour;
	double price = 0.0;

	cin >> chartype;
	cin >> start;
	cin >> end;

	if (end >= start) {
		hour = end - start;
	}
	else {
		hour = 24 - start + end;
	}

	for (int i = 0; i < hour; i++) {
		int hours = (start + i) % 24;
		if (hours >= 8 && hours < 18) {
			if (chartype == 'f') {
				price = price + 70;
			}
			else if (chartype == 'n') {
				price = price + 22;
			}
			continue;
		}
		if (hours >= 18 && hours < 22) {
			if (chartype == 'f') {
				price = price + 50;
			}
			else if (chartype == 'n') {
				price = price + 16;
			}
			continue;
		}
		else {
			if (chartype == 'f') {
				price = price + 10;
			}
			else if (chartype == 'n') {
				price = price + 6;
			}
			continue;
		}
	}
	
	if (price > 100) {
		price = price * 0.85;
	}

	if (chartype == 'f') {
		if (hour > 1) {
			price = price + (22 * (hour - 1));
		}
	}
	else if (chartype == 'n') {
		if (hour > 4) {
			price = price + (22 * (hour - 4));
		}
	}

	cout << fixed;
	cout << setprecision(2);
	cout << price;
}

void Q3()
{
	// Insert your code for Question 3 here
	int size;
	cin >> size;
	if (size % 2 == 0 || size <= 0) {
		cout << "E";
	}
	else {
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				if (j == 0 || (i == 0 || i == size / 2) && j < size - 1) {
					cout << "*";
				}
				else if (j == size - 1 && i <= size / 2) {
					cout << "*";
				}
				else {
					cout << " ";
				}
			}
			cout << endl;
		}
	}
}



// IMPORTANT: DO NOT MODIFY main()
int main()
{
	char prog_choice;

	do {
		cout << "\n\n";
		cout << "Program Selection Menu" << endl;
		cout << "---------------------------------------" << endl;
		cout << "Enter question number ('q' to quit): ";
		cin >> prog_choice;
		cout << "\n\n";

		switch (prog_choice) {
		case '0': showInfo(); break;
		case '1': Q1(); break;
		case '2': Q2(); break;
		case '3': Q3(); break;
		case 'q': break;
		default:
			cout << "No such question " << prog_choice << endl;
			break;
		}
	} while (prog_choice != 'q');

	cout << "Program terminates. Good bye!" << endl;
	return 0;
}
// END