#include "Course.h"
#include <iostream>
using namespace std;

Course::Course(const string& courseId,const string& courseName,const string& courseDescription):
	courseId(courseId), courseName(courseName), courseDescription(courseDescription)
{
}

Course::Course()
{
}

string Course::getCourseId()
{
	return courseId;
}

string Course::getCourseName()
{
	return courseName;
}

string Course::getCourseDescription()
{
	return courseDescription;
}

void Course::setCourseId(string courseId)
{
	this->courseId = courseId;
}

void Course::setCourseName(string courseName)
{
	this->courseName = courseName;
}

void Course::setCourseDescription(string courseDescription)
{
	this->courseDescription = courseDescription;
}

void Course::display() const
{
	cout << "課程代碼: " << courseId << endl;
	cout << "課程名稱: " << courseName << endl;
	cout << "課程描述: " << courseDescription << endl;
}
