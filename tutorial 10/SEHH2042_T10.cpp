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
	int x = 1;
	int y[5] = { 10, 20, 30, 40, 50 };
	int* xPtr = &x;
	int* yPtr = y;

	cout << "Address of x: " << &x << endl;
	cout << "Address of y: " << y << endl;
	cout << "Value stored in xPtr: " << xPtr << endl;
	cout << "Value stored in yPtr: " << yPtr << endl;
	cout << "*xPtr: " << *xPtr << endl;
	cout << "*yPtr: " << *yPtr << endl;
	cout << "(*yPtr + 2): " << (*xPtr + 2) << endl;
	cout << "*(yPtr + 2): " << *(yPtr + 2) << endl;

	xPtr = yPtr + 2;
	(*xPtr)++;
	(*yPtr)++;

	cout << "\nAddress of x: " << &x << endl;
	cout << "Address of y: " << y << endl;
	cout << "Value stored in xPtr: " << xPtr << endl;
	cout << "Value stored in yPtr: " << yPtr << endl;
	cout << "*xPtr: " << *xPtr << endl;
	cout << "*yPtr: " << *yPtr << endl;
	cout << "(*yPtr + 2): " << (*xPtr + 2) << endl;
	cout << "*(yPtr + 2): " << *(yPtr + 2) << endl;
}

void swapInteger(int* x, int* y) {
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

void Q2()
{
	// =====================================
	// Insert your codes for Question 2 here
	// No need main() and return 0
	// =====================================
	int x = 2, y = 5;

	cout << "Before swapping:" << endl;
	cout << "x is: " << x << endl;
	cout << "y is: " << y << endl;

	swapInteger(&x, &y);

	cout << "After swapping:" << endl;
	cout << "x is: " << x << endl;
	cout << "y is: " << y << endl;
}

void printArray(const int a[], int size) {
	for (int i = 0; i < size; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

void multiplyArray(int* const a, int size, int n) {
	for (int i = 0; i < size; i++) {
		*(a + i) *= n;
	}
}

void Q3()
{
	// =====================================
	// Insert your codes for Question 3 here
	// No need main() and return 0
	// =====================================
	const int arraySize = 10;
	int n = 3;

	int c[arraySize] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };

	cout << "Before multiplyArray, array is: ";
	printArray(c, arraySize);

	multiplyArray(c, arraySize, n);

	cout << "After multiplyArray, array is: ";
	printArray(c, arraySize);
}

void Q4()
{
	// =====================================
	// Insert your codes for Question 4 here
	// No need main() and return 0
	// =====================================
	char* buffer = new char[100]; // reserve 100 characters
	char* word[10] = {}; // initialize all pointers to 0 (NULL)
	
	// Your code should be inserted here
	cin.ignore();
	cout << "Enter a sentence with at most 10 words and 100 characters:" << endl;
	cin.getline(buffer, 100);

	char* p = buffer;
	int wordIndex = 0;

	while (*p != '\0' && wordIndex < 10) {

		while (*p == ' ')
			*p++;

		if (*p == '\0')
			break;

		word[wordIndex++] = p;

		while (*p != ' ' && *p != '\0')
			p++;

		if (*p == ' ') {
			*p = '\0';
			p++;
		}
	}

	for (int i = 0; i < 10; i++)
		if (word[i] != 0) // check if it is a NULL pointer
			cout << i << ": " << word[i] << endl;
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