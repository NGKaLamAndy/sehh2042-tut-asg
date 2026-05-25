// SEHH2042 SEHS2042 In-class Exercises (Tutorial Work)
// Program template file
// Do not modify the given codes

// =======================================
// Insert more header files when necessary
// =======================================
#include <iostream>
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
	int input, ans = 31;
	cout << "I have a number between 1 and 100.\n";
	cout << "Can you guess my number?\n";

	do {
		cout << "Guess: ";
		cin >> input;

		if (input > ans)
			cout << "Too high. Try again.\n";
		else if (input < ans)
			cout << "Too low. Try again.\n";
		else
			cout << "Excellent! Correct guess.\n";
	} while (input != ans);
}

void Q2()
{
	// =====================================
	// Insert your codes for Question 2 here
	// No need main() and return 0
	// =====================================
	int n, f = 1;
	cout << "n: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
		f *= i;
	cout << n << "! = " << f;
}

void Q3()
{
	// =====================================
	// Insert your codes for Question 3 here
	// No need main() and return 0
	// =====================================
	int a, b, sum = 0;
	cout << "Please input value A: ";
	cin >> a;
	cout << "Please input value B: ";
	cin >> b;

	if (a >= b) {
		for (int i = b; i <= a; i++) {
			if (i % 2 != 0)
				sum += i;
		}
		cout << "Sum of odd integers from " << b << " to " << a << " is " << sum << endl;
	}

	if (b > a) {
		for (int i = a; i <= b; i++) {
			if (i % 2 != 0)
				sum += i;
		}
		cout << "Sum of odd integers from " << a << " to " << b << " is " << sum << endl;
	}
}

void Q4()
{
	// =====================================
	// Insert your codes for Question 4 here
	// No need main() and return 0
	// =====================================
	double base, ans = 1;
	int exponent;
	cout << "Enter the base value: ";
	cin >> base;
	cout << "Enter the exponent value: ";
	cin >> exponent;

	if (exponent > 0) {
		for (int i = 1; i <= exponent; i++)
			ans *= base;
	}
	if (exponent < 0) {
		for (int i = -1; i >= exponent; i--)
			ans /= base;
	}
	if (exponent == 0) {
		ans = 1;
	}


	cout << base << " to the power " << exponent << " is " << ans;
}

void Q5()
{
	// =====================================
	// Insert your codes for Question 5 here
	// No need main() and return 0
	// =====================================
	int positive, isprime = 1;
	cout << "Input a positive integer: ";
	cin >> positive;

	if (positive <= 1) {
		isprime = 0;
	}
	else {
		for (int i = 2; i < positive; i++)
			if (positive % i == 0) {
				isprime = 0;
				break;
			}
	}

	if (isprime == 1)
		cout << positive << " is a prime number";
	else
		cout << positive << " is not a prime number";
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