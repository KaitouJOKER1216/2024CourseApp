#pragma once
#include<string>
#include<ctime>
using namespace std;

class Record
{
private:
	static int nextId;
	int recordId;//�R�A�ܼơA�ΨӰO����Ҫ��y����
	string studentId;
	string courseId;
	time_t recordData;
public:
	Record(const string& studentId,const string& courseId);
	
	int getRecordId() const;
	string getStudentId() const;
	string getCourseId() const;
	string getRecordData() const;
	
	void display();
};

