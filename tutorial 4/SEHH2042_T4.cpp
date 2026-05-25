// SEHH2042 SEHS2042 In-class Exercises (Tutorial Work)
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
	// Fill in your personal particulars below
	cout << "Name      : HIDDEN\n";
	cout << "Student ID: HIDDEN\n";
	cout << "Class     : B01D\n";
}

void Q1()
{
	// =====================================
	// Insert your codes for Question 1 here
	// No need main() and return 0
	// =====================================
	int input;
	cout << "Enter a positive integer: ";
	cin >> input;

	while (input > 0) {
		cout << "Factors of " << input << ": ";

		for (int n = 1; n <= input; n++) {
			if (input % n == 0)
				cout << n << " ";
		}

		cout << endl;
		cout << "Enter a positive integer: ";
		cin >> input;
	}
	cout << "Only positive integer is accepted. Program ends.";
}

void Q2()
{
	// =====================================
	// Insert your codes for Question 2 here
	// No need main() and return 0
	// =====================================
	int count = 0, w = 5;
	for (int i = 2; i <= 200; i++) {
		int j;
		for (j = 2; j < i; j++) {
			if (i % j == 0)
				break;
		}
		if (j == i) {
			cout << setw(w) << i;
			count++;
			if (count % 10 == 0)
				cout << endl;
		}
	}
}

void Q3()
{
	// =====================================
	// Insert your codes for Question 3 here
	// No need main() and return 0
	// =====================================
	int precision = 15;
	int w1 = 10;
	int w2 = 20;

	double pi = 0.0;

	cout << setw(w1) << "Terms" << setw(w2) << "Value of PI" << endl;
	cout << setw(w1) << "_____" << setw(w2) << "___________" << endl;
	cout << fixed;
	cout << setprecision(precision);

	for (int j = 1; j <= 100000; j++) {

		if (j % 2 != 0) {
			pi = pi + (double(4) / (j * 2 - 1));
		}
		else if (j % 2 == 0) {
			pi = pi - (double(4) / (j * 2 - 1));
		}

		if (j == 10) {
			cout << setw(w1) << j << setw(w2) << pi << endl;
		}
		else if (j == 100) {
			cout << setw(w1) << j << setw(w2) << pi << endl;
		}
		else if (j == 1000) {
			cout << setw(w1) << j << setw(w2) << pi << endl;
		}
		else if (j == 10000) {
			cout << setw(w1) << j << setw(w2) << pi << endl;
		}
		else if (j == 100000) {
			cout << setw(w1) << j << setw(w2) << pi << endl;
		}
	}
}

void Q4()
{
	// =====================================
	// Insert your codes for Question 4 here
	// No need main() and return 0
	// =====================================
	int input;
	cout << "Pattern size: ";
	cin >> input;

	for (int i = 0; i < input; i++) {
		for (int j = 0; j < input; j++) {
			if (i > 0 && i < input - 1 && j > 0 && j < input - 1) {
				cout << " ";
			}
			else {
				cout << "*";
			}
		}
		cout << endl;
	}

	cout << "\n\n";

	for (int i = 0; i < input; i++) {
		for (int j = 0; j < input; j++) {
			if (i == 0 || i == input - 1) {
				cout << "*";
			}
			else if (i == j) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}

	cout << "\n\n";

	for (int i = 0; i < input; i++) {
		for (int j = 0; j < input; j++) {
			if (i == 0 || i == input - 1) {
				cout << "*";
			}
			else if (i + j == input - 1) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}

	cout << "\n\n";

	for (int i = 0; i < input; i++) {
		for (int j = 0; j < input; j++) {
			if (i == 0 || i == input - 1) {
				cout << "*";
			}
			else if (i + j == input - 1) {
				cout << "*";
			}
			else if (i == j) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}

	cout << "\n\n";

	for (int i = 0; i < input; i++) {
		for (int j = 0; j < input; j++) {
			if (i == 0 || i == input - 1) {
				cout << "*";
			}
			else if (i + j == input - 1) {
				cout << "*";
			}
			else if (i == j) {
				cout << "*";
			}
			else if (j == 0 || j == input - 1) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
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
		case '4': Q4(); break;
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