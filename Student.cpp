#include "Student.h"

void Student::setName(string n)
{
	name = n;
}

string Student::getName()
{
	return name;
}

Student::Student()
{
	name = "not assigned";
}

Student::Student(string n)
{
	setName(n);
}