//#include "Person.h"
#include<string>
#include <iostream>
#include "Student.h"
#include "Teacher.h"
#include "Utility.h"
#include "Course.h"
#include"Record.h"
#include "2024CourseApp.h"
using namespace std;

int main()
{
	initializeData();
	displayMenu();
}

void initializeData()
/* {
Person personl("A314159265", "馬", "浩寧", "M", "1998-06-21");
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
	course1.display();
	course2.display();
	course3.display();
	

		vector<Course> teacher1_courses = { course1, course2, course3 };

	Teacher teacher1("C987654321", "李", "小龍", "M", "1990-12-31", "T001", Department::ComputerScience, ClassName::_1A, teacher1_courses);
	cout <<"----------"<< endl;
	teacher1.display();
}
void displayMenu() {
	int choice;
	do {
		cout << "======================" << endl;
		cout << "1.列出學生資料" << endl;
		cout << "2.列出課程資料" << endl;
		cout << "3.列出教師資料" << endl;
		cout << "4.列出選課紀錄" << endl;
		cout << "0.結束" << endl;
		cout << "請選擇操作:";
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "列出學生資料" << endl;
			for (auto student : students)
			{
				student.display();
			}
			break;
		case 2:
			cout << "列出課程資料" << endl;
			for (auto course : courses)
			{
				course.display();
			}
			break;
		case 3:
			cout << "列出教師資料" << endl;
			for (auto teacher : teachers)
			{
				teacher.display();
			}
			break;
		case 4:
			cout << "列出選課紀錄" << endl;
			for (auto record : records)
			{
				record.display();
			}
			break;
		case 0:
			cout << "結束" << endl;
			break;
		default:
			cout << "無效選擇" << endl;
			break;
		}while (choice != 0);
}

void listStudents()
{
	cout << "學生資料總共有"<<student.size()<<"筆" << endl;
	cout << "-------------------" << endl;
	for (auto student : students)
	{
		student.display();
		cout << endl;
	}
	cout << endl;
}