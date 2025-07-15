#include<iostream>
#include<string>
using namespace std;
class Student
{
	private:
		string name;
		int rollNumber;
		void printName()
		{
			cout<<"\nThe name of student is: "<<name<<endl;
		}
		void printRollNumber()
		{
			cout<<"The roll number of student is: "<<rollNumber<<endl;
		}
	public:
		string getName()
		{
			return name;
		}
		int getRollNumber()
		{
			return rollNumber;
		}
		void setName(string n)
		{
			name = n;
		}
		void setRollNumber(int r)
		{
			rollNumber = r;
		}
		void publicPrintName()
		{
			printName();
		}
		void publicPrintRollNumber()
		{
			printRollNumber();
		}
		
};

int main()
{
	Student s1;
	s1.setName("Haris");
	s1.setRollNumber(120);
//	cout<<"The name of student is: "<<s1.getName();
//	cout<<"\nThe roll number of student is: "<<s1.getRollNumber();
	s1.publicPrintName();
	s1.publicPrintRollNumber();
	return 0;
}
