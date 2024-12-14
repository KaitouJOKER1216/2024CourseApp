#include "Record.h"
#include<iostream>
#include<iomanip>
using namespace std;

int Record::nextId = 1;
Record::Record(const string& studentId, const string& courseId) :studentId(studentId), courseId(courseId),recordId(nextId++),recordData(time(0))
{

}

int Record::getRecordId() const
{
	return recordId;
}

string Record::getStudentId() const
{
	return studentId;
}

string Record::getCourseId() const
{
	return courseId;
}

string Record::getRecordData() const
{
	char buffer[20];
	struct tm timeinfo;
	localtime_s(&timeinfo, &recordData);
	strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", &timeinfo);
	return string(buffer);
}
void Record::display()
{
	cout << "��ҧǸ�:" << getRecordId() << endl;
	cout << "�Ǹ�:" << studentId << endl;
	cout << "�ҵ{�N�X:" << courseId << endl;
	cout << "��Үɶ�:" << getRecordData() << endl;
	cout << "-------------------" << endl;
}