#include<iostream>
#include<string>
using namespace std;

class GradeBook
{
	public:
	void displayMessage(string s)
	{
		cout<<"Welcome to the course "<<s;
	}
};

int main()
{
	GradeBook obj;
	string nameOfCourse;
	cout<<"Enter the name of your course: ";
	getline(cin,nameOfCourse);
	obj.displayMessage(nameOfCourse);
	cout<<"\nThe program will terminate now....";
	return 0;
}
