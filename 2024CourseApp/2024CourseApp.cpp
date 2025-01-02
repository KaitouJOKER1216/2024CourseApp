#include "Person.h"
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
		cout << "10.新增課程資料" << endl;
		cout << "11.新增教師資料" << endl;
		cout << "12.新增選課紀錄" << endl;
		cout << "13.刪除學生資料" << endl;
		cout << "14.刪除課程資料" << endl;
		cout << "15.刪除教師資料" << endl;
		cout << "16.刪除選課紀錄" << endl;
		cout << "17.修改學生資料" << endl;
		cout << "18.修改課程資料" << endl;
		cout << "19.修改教師資料" << endl;
		cout << "20.保存選課記錄到文件" << endl;
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
			queryCourse();
			system("pause");
			break;
		case 7:
			cout << "查詢教師資料" << endl;
			queryTeacher();
			system("pause");
			break;
		case 8:
			cout << "查詢選課紀錄" << endl;
			queryRecord();
			system("pause");
			break;
		case 9:
			cout << "新增學生資料" << endl;
			addstudent();
			system("pause");
			break;
		case 10:
			cout << "新增課程資料" << endl;
			addcourse();
			system("pause");
			break;
		case 11:
			cout << "新增教師資料" << endl;
			addteacher();
			//cout << "---此功能尚未開發完成---" << endl;
			system("pause");
			break;
		case 12:
			cout << "新增選課紀錄" << endl;
			addrecord();
			//cout << "---此功能尚未開發完成---" << endl;
			system("pause");
			break;
		case 13:
			cout << "刪除學生資料" << endl;
			deleteStudent();
			//cout << "---此功能尚未開發完成---" << endl;
			system("pause");
			break;
		case 14:
			cout << "刪除課程資料" << endl;
			deleteCourse();
			//cout << "---此功能尚未開發完成---" << endl;
			system("pause");
			break;
		case 15:
			cout << "刪除教師資料" << endl;
			deleteTeacher();
			//cout << "---此功能尚未開發完成---" << endl;
			system("pause");
			break;
		case 16:
			cout << "刪除選課紀錄" << endl;
			deleteRecord();
			//cout << "---此功能尚未開發完成---" << endl;
			system("pause");
			break;
		case 17:
			cout << "修改學生資料" << endl;
			updateStudent();
			//cout << "---此功能尚未開發完成---" << endl;
			system("pause");
			break;
		case 18:
			cout << "修改課程資料" << endl;
			updateCourse();
			//cout << "---此功能尚未開發完成---" << endl;
			system("pause");
			break;
		case 19:
			cout << "修改教師資料" << endl;
			updateTeacher();
			//cout << "---此功能尚未開發完成---" << endl;
			system("pause");
			break;
		case 20:
			cout << "保存選課記錄到文件" << endl;
			saveRecordsToFile("records.txt");
			system("pause");
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

void queryCourse()
{
	string courseId;
	cout << "請輸入課程代碼:";
	cin >> courseId;
	bool found = false;
	for (auto course : courses)
	{
		if (course.getCourseId() == courseId)
		{
			course.display();
			found = true;
			break;
		}
	}
	if (!found)
	{
		cout << "找不到代碼為" << courseId << "的課程" << endl;
	}
}

void queryTeacher()
{
	string teacherId;
	cout << "請輸入教師代號:";
	cin >> teacherId;
	bool found = false;
	for (auto teacher : teachers)
	{
		if (teacher.getTeacherId() == teacherId)
		{
			teacher.display();
			found = true;
			break;
		}
	}
	if (!found)
	{
		cout << "找不到代號為" << teacherId << "的教師" << endl;
	}
}

void queryRecord()
{
	string studentId;
	cout << "請輸入學生學號：";
	cin >> studentId;

	for (auto record : records)
	{
		if (record.getStudentId() == studentId)
		{
			cout << "選課紀錄ID：" << record.getRecordId() << endl;
			cout << "學生學號：" << record.getStudentId() << endl;
			cout << "課程編號：" << record.getCourseId() << endl;
			cout << "選課日期：" << record.getRecordData() << endl;
			cout << endl;
		}
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

void addteacher()
{
    string id, lastName, firstName, birthDate, gender, teacherId;
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
    cout << "教師代號:";
    cin >> teacherId;

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

    vector<Course> teacherCourses;
    string courseId;
    int courseChoice;
    char addMoreCourses;
    do {
        cout << "請輸入課程代碼:";
        cin >> courseId;
        teacherCourses.push_back(Course(courseId, "", ""));
        cout << "是否繼續新增課程? (Y/N):";
        cin >> addMoreCourses;
    } while (addMoreCourses == 'Y' || addMoreCourses == 'y');

    teachers.push_back(Teacher(id, lastName, firstName, gender, birthDate, teacherId, department, className, teacherCourses));
}

void addcourse()
{
	string courseId,courseName, courseDescription;

	cout << "課程代碼:";
	cin >> courseId;
	cout << "課程名稱:";
	cin >> courseName;
	cout << "課程描述:";
	cin >> courseDescription;

	courses.push_back(Course(courseId,courseName,courseDescription));
}

void addrecord()
{
    string studentId, courseId;
    cout << "請輸入學生學號: ";
    cin >> studentId;
    cout << "請輸入課程代碼: ";
    cin >> courseId;
    records.push_back(Record(studentId, courseId));
    cout << "選課紀錄已新增" << endl;
}

void deleteStudent()
{
	string studentId;
	cout << "請輸入學號: ";
	cin >> studentId;
	bool found = false;
	for (auto it = students.begin(); it != students.end(); it++) {
		if (it->getStudentId() == studentId) {
			students.erase(it);
			found = true;
			break;
		}
	}
	if (!found) {
		cout << "找不到學號為" << studentId << "的學生" << endl;
	}
}

void deleteCourse()
{
	string courseId;
	cout << "請輸入課程代碼: ";
	cin >> courseId;
	bool found = false;
	for (auto it = courses.begin(); it != courses.end(); it++) {
		if (it->getCourseId() == courseId) {
			courses.erase(it);
			found = true;
			break;
		}
	}
	if (!found) {
		cout << "找不到課程代碼為" << courseId << "的課程" << endl;
	}
}

void deleteTeacher()
{
	string teacherId;
	cout << "請輸入教師代號: ";
	cin >> teacherId;
	bool found = false;
	for (auto it = teachers.begin(); it != teachers.end(); it++) {
		if (it->getTeacherId() == teacherId) {
			teachers.erase(it);
			found = true;
			break;
		}
	}
	if (!found) {
		cout << "找不到教師代號為" << teacherId << "的教師" << endl;
	}
}

void deleteRecord()
{
    string studentId, courseId;
    cout << "請輸入學生學號: ";
    cin >> studentId;
    cout << "請輸入課程代碼: ";
    cin >> courseId;
    bool found = false;
    for (auto it = records.begin(); it != records.end(); it++) {
        if (it->getStudentId() == studentId && it->getCourseId() == courseId) {
            records.erase(it);
            found = true;
            cout << "選課紀錄已刪除" << endl;
            break;
        }
    }
    if (!found) {
        cout << "找不到該選課紀錄" << endl;
    }
}

void updateStudent()
{
	string studentId;
	cout << "請輸入學號: ";
	cin >> studentId;
	bool found = false;

	for (auto& student : students) {
		if (student.getStudentId() == studentId) {
			found = true;
			int departmentChoice, classNameChoice;

			cout << "科系: " << endl;
			for (int i = 0; i < static_cast<int>(Department::Last); i++) {
				cout << i << ". " << Utility::toString(static_cast<Department>(i)) << endl;
			}
			cout << "請選擇科系: ";
			cin >> departmentChoice;
			Department department = static_cast<Department>(departmentChoice);
			student.setDepartment(department);

			cout << "班級: " << endl;
			for (int i = 0; i < static_cast<int>(ClassName::Last); i++) {
				cout << i << ". " << Utility::toString(static_cast<ClassName>(i)) << endl;
			}
			cout << "請選擇班級: ";
			cin >> classNameChoice;
			ClassName className = static_cast<ClassName>(classNameChoice);
			student.setClassName(className);
		}
	}
	if (!found) {
		cout << "找不到學號為" << studentId << "的學生" << endl;
	}
}

void updateCourse()
{
    string courseId;
    cout << "請輸入要修改的課程編號：";
    cin >> courseId;

    bool found = false;
    for (int i = 0; i < courses.size(); i++)
    {
        if (courses[i].getCourseId() == courseId)
        {
            found = true;

            string courseName;
            cout << "請輸入新的課程名稱：";
            cin.ignore();
            getline(cin, courseName);
            courses[i].setCourseName(courseName);

            string courseDescription;
            cout << "請輸入新的課程描述：";
            getline(cin, courseDescription);
            courses[i].setCourseDescription(courseDescription);

            cout << "課程資料已成功修改！" << endl;
            break;
        }
    }

    if (!found)
    {
        cout << "找不到該課程編號的課程資料！" << endl;
    }
}

void updateTeacher()
{
    string teacherId;
    cout << "請輸入要修改的教師編號: ";
    cin >> teacherId;

    bool found = false;
    for (int i = 0; i < teachers.size(); i++)
    {
        if (teachers[i].getTeacherId() == teacherId)
        {
            found = true;

            string newLastName, newFirstName, newGender, newBirthDate;
            cout << "請輸入新的姓氏: ";
            cin >> newLastName;
            cout << "請輸入新的名字: ";
            cin >> newFirstName;
            cout << "請輸入新的性別: ";
            cin >> newGender;
            cout << "請輸入新的生日: ";
            cin >> newBirthDate;

            teachers[i].setLastName(newLastName);
            teachers[i].setFirstName(newFirstName);
            teachers[i].setGender(newGender);
            teachers[i].setBirthDate(newBirthDate);

            cout << "教師資料已成功修改。" << endl;
            break;
        }
    }

    if (!found)
    {
        cout << "找不到該教師編號。" << endl;
    }
}

#include <fstream>

void saveRecordsToFile(const string& filename) {
    ofstream outFile(filename);
    if (!outFile) {
        cerr << "無法打開文件: " << filename << endl;
        return;
    }

		for (const auto& record : records) {
			// 查找學生
			auto studentIt = find_if(students.begin(), students.end(), [&record](const Student& student) {
				return student.getStudentId() == record.getStudentId();
				});

			// 查找課程
			auto courseIt = find_if(courses.begin(), courses.end(), [&record](const Course& course) {
				return course.getCourseId() == record.getCourseId();
				});

			if (studentIt != students.end() && courseIt != courses.end()) {
				outFile << "選課紀錄編號: " << record.getRecordId() << endl;
				outFile << "選課日期: " << record.getRecordDate() << endl;
				outFile << "學生資料:" << endl;
				outFile << "----------------" << endl;
				outFile << "學號: " << studentIt->getStudentId() << endl;
				outFile << "姓名: " << studentIt->getLastName() << studentIt->getFirstName() << endl;
				outFile << "性別: " << studentIt->getGender() << endl;
				outFile << "生日: " << studentIt->getBirthDate() << endl;
				outFile << "科系: " << Utility::toString(studentIt->getDepartment()) << endl;
				outFile << "班級: " << Utility::toString(studentIt->getClassName()) << endl;
				outFile << "----------------" << endl;
				outFile << "課程資料:" << endl;
				outFile << "----------------" << endl;
				outFile << "課程編號: " << courseIt->getCourseId() << endl;
				outFile << "課程名稱: " << courseIt->getCourseName() << endl;
				outFile << "課程描述: " << courseIt->getCourseDescription() << endl;
				outFile << "===================" << endl;
				outFile << endl;
			}
    }

    outFile.close();
    cout << "選課記錄已保存到文件: " << filename << endl;
}