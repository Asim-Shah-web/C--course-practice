#include<iostream>
#include<string>
using namespace std;
class GradeBook
{
	private:
		string courseName;
	public:
		void SetCourseName(string n)
		{
			courseName = n;
		}
		string getCourseName()
		{
			return courseName;
		}
		void display()
		{
			cout<<"Welcome to the course: "<<getCourseName();
		}
};
int main()
{
	GradeBook b1;
	b1.SetCourseName("Object Oriented Programming");
	cout<<"The name of course is "<<b1.getCourseName()<<endl;
	b1.display();
	return 0;
}
