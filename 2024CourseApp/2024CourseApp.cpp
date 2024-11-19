#include "Person.h"
#include <iostream>
using namespace std;

int main()
{
	Person personl("A123456789", "Wang", "XiaoMing", "M", "1999-01-01");
	Person* person2=new Person();
	person2->setId("B123456789");
	person2->setLastName("Li");
	person2->setFirstName("XiaoHong");
	person2->setGender("M");
	person2->setBirthDate("1999-01-01");

	personl.display();
	cout << endl;
	person2->display();
}
