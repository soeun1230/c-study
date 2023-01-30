#include <iostream>
#include <string>
using namespace std;


class Student
{
public:
	Student();
	~Student();
	void InputData(); // Input all data from user
	void OutputData(); // Output class list to console
	void ResetClasses(); // Reset class list
	Student& operator =(const Student& rightSide); // Assignment operator
private:
	string name;
	int numClasses;
	string* classList;
};

Student::Student() {
	classList = new string[numClasses];
}

Student :: ~Student() {
	delete[] classList;
}

void Student::InputData() {
	cout << "Enter student name." << endl;
	cin >> name;
	cout << "Enter number of classes." << endl;
	cin >> numClasses;
	classList = new string[numClasses];
	cin.ignore(100, '\n');
	for (int i = 0; i < numClasses; i++) {
		cout << "Enter name of class " << i + 1 << endl;
		getline(cin,classList[i]);
	};
};

void Student::OutputData() {
	cout << "Name: " << name << endl;
	cout << "Number of classes: " << numClasses << endl;
	for (int i = 0; i < numClasses; i++) {
		cout << "  Class " << i + 1 << ":" << classList[i] << endl;
	};
}

void Student::ResetClasses() {
	numClasses = 0;
	delete [] classList;
	classList = NULL;
};

Student& Student :: operator =(const Student& rightside) {
	if (this == &rightside)
		return *this;
	else
	{
		name = rightside.name;
		numClasses = rightside.numClasses;
		classList = new string[numClasses];
		for (int i = 0; i < numClasses; i++)
			classList[i] = rightside.classList[i];
		return *this;
	}
};

int main()
{
	// Test our code with two student classes
	Student s1, s2;
	s1.InputData(); // Input data for student 1
	cout << endl;
	cout << "Student 1's data:" << endl;
	s1.OutputData(); // Output data for student 1
	cout << endl;
	s2 = s1;
	cout << "Student 2's data after assignment from student 1:" << endl;
	s2.OutputData(); // Should output same data as for student 1
	s1.ResetClasses();
	cout << endl;
	cout << "Student 1's data after reset:" << endl;
	s1.OutputData(); // Should have no classes
	cout << endl;
	cout << "Student 2's data, should still have original classes:" << endl;
	s2.OutputData(); // Should still have original classes
	cout << endl;
	return 0;
}