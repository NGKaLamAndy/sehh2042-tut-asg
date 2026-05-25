// SEHH2042 SEHS2042 In-class Exercises (Tutorial Work)
// Program template file
// Do not modify the given codes

// =======================================
// Insert more header files when necessary
// =======================================
#include <iostream>
#include <iomanip>
#include <cmath>
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
	const double PI = 3.14159265;
	double radian;

	cout << "Degree\t\tSin\t\tCos\n";

	for (int degree = 0; degree <= 360; degree += 10) {
		radian = degree * PI / 180;
		cout << degree << "\t\t" << sin(radian) << "\t\t" << cos(radian) << endl;
	}
}

void Q2()
{
	// =====================================
	// Insert your codes for Question 2 here
	// No need main() and return 0
	// =====================================
	const double PI = 3.14159265;
	double radian;
	cout << "Degree\t\tSin\t\tCos\n";
	cout << fixed;
	cout << setprecision(4);

	for (int degree = 0; degree <= 360; degree += 10) {
		radian = degree * PI / 180;
		cout << noshowpos << right << setw(3) << degree;
		cout << showpos << right << setw(20) << sin(radian);
		cout << setw(16) << cos(radian) << endl;
	}
}

double integerPower(double base, int exponent) {
	double ans = 1;

	if (exponent == 0) {
		ans = 1;
	}
	else if (exponent > 0) {
		for (int i = 0; i < exponent; i++) {
			ans = ans * base;
		}
	}
	else if (exponent < 0) {
		for (int i = exponent; i < 0; i++) {
			ans = ans / base;
		}
	}

	return ans;
}

void Q3()
{
	// =====================================
	// Insert your codes for Question 3 here
	// No need main() and return 0
	// =====================================
	double a, b;
	int e;
	cout << "Enter the base value: ";
	cin >> b;
	cout << "Enter the expnent value: ";
	cin >> e;
	a = integerPower(b, e);
	cout << b << " to the power " << e << " is " << a;
}

void nChar(int n, char c) 
{
	for (int i = 0; i < n; i++)
		cout << c;
}

void Q4()
{
	// =====================================
	// Insert your codes for Question 4 here
	// No need main() and return 0
	// =====================================
	for (int i = 1; i <= 5; i++) {
		nChar(i, '*');
		cout << endl;
	}
	cout << endl;
	for (int i = 1; i <= 5; i++) {
		nChar(5 - i, ' ');
		nChar(i, '*');
		cout << endl;
	}
	cout << endl;
	for (int i = 1; i <= 5; i++) {
		nChar(5 - i, ' ');
		nChar(2 * i - 1, '*');
		cout << endl;
	}
	cout << endl;
	for (int i = 1; i <= 5; i++) {
		nChar(5 - i, ' ');
		nChar(2 * i - 1, '*');
		cout << endl;
	}
	for (int i = 4; i >= 1; i--) {
		nChar(5 - i, ' ');
		nChar(2 * i - 1, '*');
		cout << endl;
	}
	cout << endl;
	for (int i = 1; i <= 5; i++) {
		nChar(5 - i, ' ');
		nChar(2 * i - 1, '*');
		cout << endl;
	}	for (int i = 1; i <= 5; i++) {
		nChar(5 - i, ' ');
		nChar(2 * i - 1, '*');
		cout << endl;
	}	for (int i = 1; i <= 5; i++) {
		nChar(5 - i, ' ');
		nChar(2 * i - 1, '*');
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