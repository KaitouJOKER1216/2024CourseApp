//#include "Person.h"
#include<string>
#include <iostream>
#include <vector>
#include "Student.h"
#include "Teacher.h"
#include "Utility.h"
#include "Course.h"
#include "Record.h"
#include "2024CourseApp.h"
using namespace std;

vector<Student> students;
vector<Teacher> teachers;
vector<Course> courses;
vector<Record> records;

int main()
{
	initializeData();
	displayMenu();
}

void initializeData()
{/*
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
	teacher1.display();*/
	//新增五筆課程資訊
	courses.push_back(Course("C001", "C++ Programming", "這門課教授C++程式語言"));
	courses.push_back(Course("C002", "Java Programming", "這門課教授Java程式語言"));
	courses.push_back(Course("C003", "Python Programming", "這門課教授Python程式語言"));
	courses.push_back(Course("C004", "C# Programming", "這門課教授C#程式語言"));
	courses.push_back(Course("C005", "Visual Basic Programming", "這門課教授Visual Basic程式語言"));

	//新增五筆學生資訊
	students.push_back(Student("A314159265", "馬", "浩寧", "M", "1998-06-21", "B123456789", Department::ComputerScience, ClassName::_1A));
	students.push_back(Student("B161803398", "杜", "海皇", "M", "1999-03-14", "B987654321", Department::ComputerScience, ClassName::_1A));
	students.push_back(Student("C112358132", "高", "斯", "M", "1997-12-31", "B246813579", Department::InformationManagement, ClassName::_1B));
	students.push_back(Student("D141421356", "小", "傲", "M", "1996-09-15", "B369258147", Department::InformationManagement, ClassName::_2A));
	students.push_back(Student("E173205080", "賈", "慶", "M", "1995-02-28", "B582469371", Department::ElectricalEngineering, ClassName::_2B));

	//新增兩筆教師資訊
	vector<Course> teacher1_courses = { courses[0], courses[1], courses[2] };
	teachers.push_back(Teacher("T001", "犀", "俐", "男", "1980-7-1", "T001", Department::ComputerScience, ClassName::_1A, teacher1_courses));
	vector<Course> teacher2_courses = { courses[3], courses[4] };
	teachers.push_back(Teacher("T002", "楊", "嘉源", "男", "1985-5-5", "T002", Department::InformationManagement, ClassName::_1B, teacher2_courses));

	// 新增十筆選課紀錄
	records.push_back(Record("S001", "C001"));
	records.push_back(Record("S001", "C002"));
	records.push_back(Record("S002", "C001"));
	records.push_back(Record("S002", "C003"));
	records.push_back(Record("S003", "C002"));
	records.push_back(Record("S003", "C003"));
	records.push_back(Record("S004", "C003"));
	records.push_back(Record("S004", "C004"));
	records.push_back(Record("S005", "C004"));
	records.push_back(Record("S005", "C005"));
}
void displayMenu()
{
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
		cout << "======================" << endl;

		switch (choice)
		{
		case 1:
			cout << "列出學生資料" << endl;
			listStudents();
			break;
		case 2:
			cout << "列出課程資料" << endl;
			listCourses();
			break;
		case 3:
			cout << "列出教師資料" << endl;
			listTeachers();
			break;
		case 4:
			listRecords();
			break;
		case 0:
			cout << "謝謝使用 雨克系統" << endl;
			break;
		default:
			cout << "無效選擇" << endl;
			break;
		}
	} while (choice != 0);
}

void listStudents()
{
	cout << "學生資料總共有"<<students.size()<<"筆" << endl;
	cout << "-------------------" << endl;
	for (auto student : students)
	{
		student.display();
		cout << endl;
	}
	cout << endl;
}

void listCourses()
{
	cout << "課程資料共有" << courses.size() << "筆" << endl;
	cout << "-------------------" << endl;
	for (auto course : courses)
	{
		course.display();
		cout << endl;
	}
	cout << endl;
}

void listTeachers()
{
	cout << "教師資料共有" << teachers.size() << "筆" << endl;
	cout << "-------------------" << endl;
	for (auto teacher : teachers)
	{
		teacher.display();
		cout << endl;
	}
	cout << endl;
}

void listRecords()
{
	cout << "選課紀錄共有" << records.size() << "筆" << endl;
	cout << "-------------------" << endl;
	for (auto record : records)
	{
		record.display();
		cout << endl;
	}
	cout << endl;
}