#include "Course.h"

void Course::setCourseName(string n)
{
	courseName = n;
}

string Course::getCourseName()
{
	return courseName;
}

void Course::printStudentInfo()
{
	for (int i = 0; i < studentCount; i++)
	{
		cout << studentInfo[i].getName() << endl;
	}
}
Student* Course::getStudentInfo(int index){   
	if (index < 0 || index >= studentCount)
	{
		return NULL;// out of bounds 

	}
	else
	{
		Student* temp = new Student();
		temp->setName(studentInfo[index].getName());

		return temp;
	}
}

Course::Course()
{
	setCourseName("Unavailable");
	studentInfo = NULL;
}

Course::Course(string n, Student* stdInfo, int count)
{
	setCourseName(n);
	// deep copy 
	studentCount = count;
	studentInfo = new Student[count];

	for (int i = 0; i < count; i++)
	{
		studentInfo[i] = Student(stdInfo[i].getName());
	}
}

Course::~Course()
{
	delete[] studentInfo;
}