// SEHH2042 SEHS2042 In-class Exercises (Tutorial Work)
// Program template file
// Do not modify the given codes

// =======================================
// Insert more header files when necessary
// =======================================
#define _CRT_SECURE_NO_WARNINGS
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
	char text[100];
	cout << "Enter a string: ";
	cin >> text;

	for (int i = 0; text[i] != '\0'; i++) {
		if (text[i] >= 'a' && text[i] <= 'z')
			text[i] = text[i] - 'a' + 'A';
	}

	cout << "Converted string is: " << text;
}

void swapString(char text1[], char text2[]) {
	char swaptext;

	for (int i = 0; text1[i] != '\0' && text2[i] != '\0'; i++) {
		swaptext = text1[i];
		text1[i] = text2[i];
		text2[i] = swaptext;
	}
}


void Q2()
{
	// =====================================
	// Insert your codes for Question 2 here
	// No need main() and return 0
	// =====================================
	char w1[20], w2[20];

	cout << "Enter the two words (separated by space): ";
	cin >> w1;
	cin >> w2;

	cout << "Before swapping, words are:\n";
	cout << w1 << endl << w2 << endl;

	swapString(w1, w2);

	cout << "After swapping, words are:\n";
	cout << w1 << endl << w2 << endl;

}

void Q3()
{
	// =====================================
	// Insert your codes for Question 3 here
	// No need main() and return 0
	// =====================================
	char buffer[80];
	char msgs[10][15] = {
		"a", "ab", "abc", "abcd", "abcde", "abcdef",
		"abcdefg", "abcdefgh", "abcdefghi", "abcdefghij"
	};

	// Put strings in msgs into buffer
	// Your codes should be inserted here.
	strcpy(buffer, msgs[0]);
	strcat(buffer, "\n");

	for (int i = 1; i < 10; i++) {
		strcat(buffer, msgs[i]);
		strcat(buffer, "\n");
	}

	// Print the buffer content
	cout << "buffer is:" << endl;
	cout << buffer;

	// Show the length of buffer, using strlen()
	// Your codes should be inserted here.
	cout << "Length of buffer is: " << strlen(buffer) << endl;
}

const int NMSG = 3;		// (Global) maximum no. of messages
const int MAXLEN = 80;	// (Global) maximum length of each message

void printReverse(char msg[][MAXLEN]) {
	char temp[NMSG][MAXLEN];

	for (int i = 0; i < NMSG; i++){
		int n = strlen(msg[i]);

		for (int j = 0; j < n / 2; j++) {
			temp[i][j] = msg[i][j];
			msg[i][j] = msg[i][n - j - 1];
			msg[i][n - j - 1] = temp[i][j];
		}
	}
	cout << "\nThe messages are printed in a last-in-first-out sequence.\n";
	cout << "Characters in each message are printed in a reverse order.\n";
	for (int i = NMSG - 1; i >= 0; i--)
		cout << "Message " << i << ": " << msg[i] << endl;
}

void Q4()
{
	// =====================================
	// Insert your codes for Question 4 here
	// No need main() and return 0
	// =====================================
	char message[NMSG][MAXLEN];
	cin.ignore(MAXLEN, '\n');

	for (int i = 0; i < NMSG; i++) {
		cout << "Enter message " << i << ": ";
		cin.getline(message[i], MAXLEN, '\n');
	}

	printReverse(message);
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