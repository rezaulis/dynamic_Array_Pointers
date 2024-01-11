#include <string>
using namespace std;
#include <iostream>
class Student
{
private:
	string name;
public: 

	void setName(string n);
	string getName();
	Student();
	Student(string n);

};