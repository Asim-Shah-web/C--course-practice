#include<iostream>
using namespace std;
class Student
{
	private:
		int age;
	public:
		Student()
		{
			age = 0;
		}
		void setAge(int a)
		{
			if(a >= 19 && a <=25)
			{
				age = a;
			}
			else
				cout<<"Age should be between 19 and 25 only\n";
				
		}
		int getAge()
		{
			return age;
		}
};
int main()
{
	Student obj1,obj2;
	
	obj1.setAge(15);
	cout<<"The age of student obj1 = "<<obj1.getAge();
	return 0;
}
/*#include "Student.h"

Student::Student()
{
}*/
