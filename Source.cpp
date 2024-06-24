#include <iostream>
using namespace std;

class Person {
public:
	void print() const {
		cout << "Person" << endl;
	}
};

class Student : public Person {
public:
	void print() const {
		cout << "Student" << endl;
	}
};

int main() {
	double d = 1.4142;
	float f = static_cast<float>(d);
	cout << "Double value: " << d << endl;
	cout << "Float value: " << f << endl;
	int i = static_cast<int>(f);
	cout << "Int value: " << i << endl;

	Person person;
	Student student;

	Person* pPerson;
	Student* pStudent;

	pPerson = &student;
	Student* castedPStudent = static_cast<Student*>(pPerson);

	if (castedPStudent) {
		cout << "Casting Person* to Student* succeeded." << endl;
		castedPStudent->print();
	}
	else
		cout << "Casting Person* to Student* failed." << endl;

	pStudent = &student;
	Person* castedPPerson = static_cast<Person*>(pStudent);

	if (castedPPerson) {
		cout << "Casting Student* to Person* succeeded." << endl;
		castedPPerson->print();
	}
	else
		cout << "Casting Student* to Person* failed." << endl;

	return 0;
}