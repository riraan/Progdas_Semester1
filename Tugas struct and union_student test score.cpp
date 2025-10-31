#include <iostream>
#include <string>
using namespace std;

struct studentType {
	string studentFname;
	string studentLname;
	int testScore;
	char gradeType;
};
void data(studentType student[], int size) {
	for (int i=0; i<size; i++) {
		cout << "Enter student number " << i+1<< "'s first name: ";
		cin >> student[i].studentFname;
		cout << "Enter student number " << i+1<< "'s last name: ";
		cin >> student[i].studentLname;
		cout << "Enter student number " << i+1<< "'s score: ";
		cin >> student[i].testScore;
	}
}
void grade(studentType student[], int size) {
	for (int i=0; i<size; i++) {
		if (student[i].testScore >= 93) {
			student[i].gradeType = 'A';
		} else if (student[i].testScore >= 85) {
			student[i].gradeType = 'B';
		} else if (student[i].testScore >= 75) {
			student[i].gradeType = 'C';
		} else if (student[i].testScore >= 60) {
			student[i].gradeType = 'D';
		} else {
			student[i].gradeType = 'F';
		}
	}
}
int high_score(studentType student[], int size) {
	int high = student[0].testScore;
	for (int i=1; i<size; i++) {
		if (student[i].testScore > high) {
			high = student[i].testScore;
		}
	}
	return high;
}
void print_high(studentType student[], int size, int high) {
	for (int i = 0; i<size; i++) {
		if (student[i].testScore == high) {
			cout << "Student who has the highest score is: " << student[i].studentLname << ", "<< student[i].studentFname << "\nWith the score of : " << high << endl;
		}
	}
}
void print_all(studentType student[], int size) {
	cout << "\tSTUDENT DATAD\t" << endl;
	for (int i = 0; i < size; i++) {
		cout << i+1 << ".\tName: " << student[i].studentLname << ", "<< student[i].studentFname << endl;
		cout << "\tScore: " << student[i].testScore << endl;
	}
}
int main () {
	int size = 20;
	studentType student[size];
	
	data(student, size);
	grade(student, size);
	int top = high_score(student, size);
	print_all(student, size);
	print_high(student, size, top);
	
	return 0;
}
