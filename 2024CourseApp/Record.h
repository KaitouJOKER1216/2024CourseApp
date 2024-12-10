#pragma once
#include<string>
#include<ctime>
using namespace std;

class Record
{
private:
	static int nextId;
	int recordId;
	string studentId;
	string courseId;
	time_t recordData;
public:
	Record();
	Record(string& studentId, string& courseId);

	
	string getRecordId() const;
	string getStudentId() const;
	string getCourseId() const;
	string getRecordData() const;
	
	void display();
};

