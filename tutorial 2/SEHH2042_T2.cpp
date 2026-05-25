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
	int n, digit1, digit2;
	cout << "Enter a two-digit integer (00-99): ";
	cin >> n;
	digit1 = n / 10;
	digit2 = n % 10;
	if (digit1 > digit2)
		cout << digit1 << " > " << digit2 << endl;
	else if (digit1 < digit2)
		cout << digit1 << " < " << digit2 << endl;
	else
		cout << digit1 << " = " << digit2 << endl;
}

void Q2()
{
	// =====================================
	// Insert your codes for Question 2 here
	// No need main() and return 0
	// =====================================
	int x, y, d1;
	cout << "Input x: ";
	cin >> x;
	cout << "Input y: ";
	cin >> y;
	if (y % x == 0)
		cout << x << " is a factor of " << y << endl;
	else
		cout << x << " is not a factor of " << y << endl;
}

void Q3()
{
	// =====================================
	// Insert your codes for Question 3 here
	// No need main() and return 0
	// =====================================
	int year;
	cout << "Input a year: ";
	cin >> year;
	if ((year % 100 != 0) && (year % 4 == 0) || (year % 400 == 0))
		cout << "Is " << year << " a leap year? Yes" << endl;
	else
		cout << "Is " << year << " a leap year? No" << endl;
}

void Q4()
{
	// =====================================
	// Insert your codes for Question 4 here
	// No need main() and return 0
	// =====================================
	double x, y, z, sina, cosa, tana;
	int w = 10;
	cout << setprecision(3);
	cout << "Input side x: ";
	cin >> x;
	cout << "Input side y: ";
	cin >> y;
	cout << "Input side z: ";
	cin >> z;
	sina = x / z;
	cosa = y / z;
	tana = x / y;
	if (x * x + y * y == z * z) {
		cout << fixed;
		cout << setw(w) << "sinA" << setw(w) << "cosA" << setw(w) << "tanA\n";
		cout << setw(w) << sina << setw(w) << cosa << setw(w) << tana;
	}
	else
		cout << "Error: Not right-angled triangle\n";
}

void Q5()
{
	// =====================================
	// Insert your codes for Question 5 here
	// No need main() and return 0
	// =====================================
	int x, type;

	cout << "What is the principal value? ";
	cin >> x;
	cout << "Please enter the customer type: ";
	cin >> type;

	cout << "Interest payable after one year: ";

	switch (type) {
	case 0: cout << "$" << x * 0.005 << endl;
		break;
	case 1: cout << "$" << x * 0.008 << endl;
		break;
	case 2: cout << "$" << x * 0.01 << endl;
		break;
	case 3: cout << "$" << x * 0.012 << endl;
		break;
	case 4: cout << "$" << x * 0.02 << endl;
		break;
	default: cout << "Error in customer type\n";
	}
}

void Q6()
{
	// =====================================
	// Insert your codes for Question 6 here
	// No need main() and return 0
	// =====================================
	int dd, mm, yyyy, max;
	cout << "Input day month year: ";
	cin >> dd >> mm >> yyyy;

	cout << dd << "-" << mm << "-" << yyyy;

	switch (mm) {
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		max = 31;
		if (dd <= max)
			cout << " is correct\n";
		else
			cout << " is incorrect\n";
		break;
	case 4: case 6: case 9: case 11:
		max = 30;
		if (dd <= max)
			cout << " is correct\n";
		else
			cout << " is incorrect\n";
		break;
	case 2:
		if ((yyyy % 100 != 0) && (yyyy % 4 == 0) || (yyyy % 400 == 0))
			max = 29;
		else
			max = 28;
		if (dd <= max)
			cout << " is correct\n";
		else
			cout << " is incorrect\n";
		break;
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
		case '5': Q5(); break;
		case '6': Q6(); break;
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