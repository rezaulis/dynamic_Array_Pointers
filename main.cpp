/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include "Course.h"
int main()
{
	Student* demoData = new Student[3];

	demoData[0] = Student("James");
	demoData[1] = Student("Mary");
	demoData[2] = Student("Steve");

	/*for (int i = 0; i < 3; i++)
	{
		cout << demoData[i].getName() << endl;
	}*/

	Course class2110("CSC2110", demoData, 3);

	//demoData[0].setName("Jamal");

	class2110.printStudentInfo();


}