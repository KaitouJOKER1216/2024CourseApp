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
	students.push_back(Student("A314159265", "馬", "浩寧", "M", "1998-06-21", "4B3G0001", Department::ComputerScience, ClassName::_1A));
	students.push_back(Student("B161803398", "杜", "海皇", "M", "1999-03-14", "4B3G0002", Department::ComputerScience, ClassName::_1A));
	students.push_back(Student("C112358132", "高", "斯", "M", "1997-12-31", "4B3G0003", Department::InformationManagement, ClassName::_1B));
	students.push_back(Student("D141421356", "小", "傲", "M", "1996-09-15", "4B3G0004", Department::InformationManagement, ClassName::_2A));
	students.push_back(Student("E173205080", "賈", "慶", "M", "1995-02-28", "4B3G0005", Department::ElectricalEngineering, ClassName::_2B));

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
		system("cls");
		cout << "======================" << endl;
		cout << "1.列出學生資料" << endl;
		cout << "2.列出課程資料" << endl;
		cout << "3.列出教師資料" << endl;
		cout << "4.列出選課紀錄" << endl;
		cout << "5.查詢學生資料" << endl;
		cout << "6.查詢課程資料" << endl;
		cout << "7.查詢教師資料" << endl;
		cout << "8.查詢選課紀錄" << endl;
		cout << "9.新增學生資料" << endl;
		cout << "0.結束" << endl;
		cout << "請選擇操作:";
		cin >> choice;
		cout << "======================" << endl;

		switch (choice)
		{
		case 1:
			cout << "列出學生資料" << endl;
			listStudents();
			system("pause");
			break;
		case 2:
			cout << "列出課程資料" << endl;
			listCourses();
			system("pause");
			break;
		case 3:
			cout << "列出教師資料" << endl;
			listTeachers();
			system("pause");
			break;
		case 4:
			cout << "列出選課紀錄" << endl;
			listRecords();
			system("pause");
			break;
		case 5:
			cout << "查詢學生資料" << endl;
			queryStudent();
			system("pause");
			break;
		case 6:
			cout << "查詢課程資料" << endl;
			system("pause");
			break;
		case 7:
			cout << "查詢教師資料" << endl;
			system("pause");
			break;
		case 8:
			cout << "查詢選課紀錄" << endl;
			system("pause");
			break;
		case 9:
			cout << "新增學生資料" << endl;
			addstudent();
			system("pause");
			break;
		case 0:
			cout << "謝謝使用 雨克系統" << endl;
			break;
		default:
			cout << "無效選擇" << endl;
			system("pause");
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

void queryStudent()
{
	string studentId;
	cout << "請輸入學號:";
	cin >> studentId;
	bool found = false;
	for (auto student : students)
	{
		if (student.getStudentId() == studentId)
		{
			student.display();
			found = true;
			break;
		}
	}
	if (!found)
	{
		cout << "找不到學號為" << studentId << "的學生" << endl;
	}
}

void addstudent()
{
	string id, lastName, firstName, birthDate, gender, studentId;
	int departmentChoice, classNameChoice;

	cout << "身分證字號:";
	cin >> id;
	cout << "姓:";
	cin >> lastName;
	cout << "名:";
	cin >> firstName;
	cout << "生日:";
	cin >> birthDate;
	cout << "性別:";
	cin >> gender;
	cout << "學號:";
	cin >> studentId;

	cout << "科系:" << endl;
	for (int i = 0; i < static_cast<int>(Department::Last); i++)
	{
		cout << i << "." << Utility::toString(static_cast<Department>(i)) << endl;
	}
	cout << "請選擇科系:";
	cin >> departmentChoice;
	Department department = static_cast<Department>(departmentChoice);

	cout << "班級:";
	for (int i = 0; i < static_cast<int>(ClassName::Last); i++)
	{
		cout << i << "." << Utility::toString(static_cast<ClassName>(i)) << endl;
	}
	cout << "請選擇班級:";
	cin >> classNameChoice;
	ClassName className = static_cast<ClassName>(classNameChoice);

	students.push_back(Student(id, lastName, firstName, gender, birthDate, studentId, department, className));
}