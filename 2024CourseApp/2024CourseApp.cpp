//#include "Person.h"
#include<string>
#include <iostream>
#include "Student.h"
#include "Teacher.h"
#include "Utility.h"
#include "Course.h"
#include "2024CourseApp.h"
using namespace std;

int main()
{
	InitializeData();
}

void InitializeData()
{
/*Person personl("A314159265", "馬", "浩寧", "M", "1998-06-21");
	Person* person2=new Person();
	person2->setId("B161803398");
	person2->setLastName("杜");
	person2->setFirstName("海皇");
	person2->setGender("M");
	person2->setBirthDate("1999-03-14");

	personl.display();
	cout << endl;
	person2->display
	*/

	Student student1("A314159265", "馬", "浩寧", "M", "1998-06-21", "B123456789", Department::ComputerScience, ClassName::_1A);
	student1.display();

	cout << endl;
	Course course1("C001", "C++ Programming", "這門課教授C++程式語言");
		Course course2("C002", "Java Programming", "這門課教授Java程式語言");
			Course course3("C003", "Python Programming", "這門課教授Python程式語言");
	/*course1.display();
	course2.display();
	course3.display();
	*/

		vector<Course> teacher1_courses = { course1, course2, course3 };

	Teacher teacher1("C987654321", "李", "小龍", "M", "1990-12-31", "T001", Department::ComputerScience, ClassName::_1A, teacher1_courses);
	cout <<"----------"<< endl;
	teacher1.display();
}
