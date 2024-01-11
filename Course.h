#include "Student.h"
class Course
{
private: 
	string courseName;
	Student* studentInfo;
	int studentCount;
public:
	void setCourseName(string n);
	string getCourseName();

	void printStudentInfo();
	
	Student* getStudentInfo(int index);
	Student* getStudentInfo(string name);
	Course();

	Course(string n, Student* stdInfo, int count);
	~Course();

};