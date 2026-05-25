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

void printData(int list[], int size) {
	cout << "The input integers are:\n";
	for (int i = 0; i < size; i++) {
		cout << setw(5) << list[i];

		if (i % 5 == 4)
			cout << endl;
	}
}

void Q1()
{
	// =====================================
	// Insert your codes for Question 1 here
	// No need main() and return 0
	// =====================================
	int n, data[20];
	cout << "How many integers to enter? ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << "? ";
		cin >> data[i];
	}

	printData(data, n);
}

void printBar(int list[], int size) {
	cout << "The bar chart is:\n";
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < list[i]; j++) {
			cout << "*";
		}
		cout << endl;
	}
}

void Q2()
{
	// =====================================
	// Insert your codes for Question 2 here
	// No need main() and return 0
	// =====================================
	int n, data[20];
	cout << "How many integers to enter? ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << "? ";
		cin >> data[i];
	}

	printBar(data, n);
}

void printData1(int list[], int size) {
	cout << "The random integers are:\n";
	for (int i = 0; i < size; i++) {
		cout << setw(5) << list[i];

		if (i % 5 == 4)
			cout << endl;
	}
}

int largest(int list[], int size) {
	int large = 0;
	for (int i = 0; i < size; i++) {
		if (large < list[i])
			large = list[i];
	}
	return large;
}

double average(int list[], int size) {
	double avg, sum = 0.0;
	for (int i = 0; i < size; i++) {
		sum += list[i];
	}
	avg = sum / size;
	return avg;
}

void Q3()
{
	// =====================================
	// Insert your codes for Question 3 here
	// No need main() and return 0
	// =====================================
	int n = 0, data[20];
	cout << "Please enter the seed value: ";
	cin >> n;

	srand(n);
	for (int i = 0; i < 20; i++) {
		data[i] = rand() % 100 + 1;
	}

	printData1(data, 20);
	cout << "The largest number is: " << largest(data, 20);
	cout << "\nThe average value is: " << average(data, 20);
}

void printData2(int list[], int size) {
	cout << "The random integers are:\n";
	for (int i = 0; i < size; i++) {
		cout << setw(5) << list[i];

		if (i % 10 == 9)
			cout << endl;
	}
}

void maxAppear(int list[], int size, int& max, int& freq) {
	int frequency[11] = {};
	freq = 0;
	for (int i = 0; i < size; i++) {
		frequency[list[i]]++;
	}

	for (int i = 1; i < 11; i++) {
		if (freq < frequency[i]) {
			freq = frequency[i];
			max = i;
		}
	}
	cout << max << " appears the most with " << freq << " times";
}

void Q4()
{
	// =====================================
	// Insert your codes for Question 4 here
	// No need main() and return 0
	// =====================================
	int n, m, f, data[100];
	cout << "Please enter the seed value: ";
	cin >> n;
	srand(n);

	for (int i = 0; i < 100; i++) {
		data[i] = rand() % 10 + 1;
	}

	printData2(data, 100);
	maxAppear(data, 100, m, f);
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