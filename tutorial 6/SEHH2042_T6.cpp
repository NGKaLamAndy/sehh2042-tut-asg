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

double hypoten(double x, double y)
{
	double z;
	z = sqrt(x * x + y * y);
	return z;
}

void Q1()
{
	// =====================================
	// Insert your codes for Question 1 here
	// No need main() and return 0
	// =====================================
	double side1, side2;
	cout << "Please enter the length of first side: ";
	cin >> side1;
	cout << "Please enter the length of second side: ";
	cin >> side2;
	cout << "Hypotenuse of a " << side1 << " by " << side2 << " right triangle is " << hypoten(side1, side2);
}

void sumAvg(int x, int y, int &z, float &a)
{
	z = 0;
	int num = 0;
	for (int i = x; i <= y; i++) {
		z += i;
		num++;
	}
	a = float(z) / num;
}

void Q2()
{
	// =====================================
	// Insert your codes for Question 2 here
	// No need main() and return 0
	// =====================================
	int lower, upper, sum;
	float average;

	cout << "Enter the lower bound: ";
	cin >> lower;
	cout << "Enter the upper bound: ";
	cin >> upper;

	sumAvg(lower, upper, sum, average);

	cout << "From " << lower << " to " << upper << ":\n";
	cout << "Sum     = " << sum << endl;
	cout << "Average = " << average << endl;
}

double calcPI(int x)
{
	if (x == 1)
		return double(4) / (x * 2 - 1);
	else {
		if (x % 2 != 0)
			return calcPI(x - 1) + double(4) / (x * 2 - 1);
		else
			return calcPI(x - 1) - double(4) / (x * 2 - 1);
	}
}

void Q3()
{
	// =====================================
	// Insert your codes for Question 3 here
	// No need main() and return 0
	// =====================================
	int x;
	cout << "How many terms for PI: ";
	cin >> x;
	double pi = calcPI(x);
	cout << fixed;
	cout << setprecision(15);
	cout << "PI with " << x << " terms is " << pi;
}

void printBinary(int num)
{
	if (num <= 0) {
		return;
	}

	printBinary(num / 2);
	cout << num % 2;
}

void Q4()
{
	// =====================================
	// Insert your codes for Question 4 here
	// No need main() and return 0
	// =====================================
	int num;

	cout << "Input a positive decimal integer: ";
	cin >> num;

	cout << "The binary version is ";
	printBinary(num);
	cout << endl;
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