#pragma once
#include <string>
using namespace std;

class Course
{
private:
	string courseId;
	string courseName;
	string courseDescription;

public:
	Course(const string& courseId,const string& courseName,const string& courseDescription);
	Course();

	//getter
	string getCourseId();
	string getCourseName();
	string getCourseDescription();

	//setter
	void setCourseId(string courseId);
	void setCourseName(string courseName);
	void setCourseDescription(string courseDescription);
	void display() const;
};

