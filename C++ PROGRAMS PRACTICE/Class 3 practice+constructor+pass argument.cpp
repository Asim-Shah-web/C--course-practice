#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class stud
{   private:
	 int math,ds,oop;
	 string stname;
	 int total;
	 float avg;
	 public:
	 //	int total; float avg;        //if it is not declared here then in the display func it will through error,bcz if var declared in 1 func cannot be used in be used in another func.
	stud(string nm,int s1,int s2,int s3)
	{
		stname=nm;
		math=s1;
		ds=s2;
		oop=s3;
	   //int total=math+ds+oop;
	  // float avg=total/3.0;
	  total=math+ds+oop;
	  avg=total/3.0;
	}
	void display();
};
void stud::display()
{
   //	int total;
   //	float avg;
	cout<<"Student Name: "<<stname<<endl;
	cout<<"Maths marks are: "<<math<<endl;
	cout<<"Discrete structures marks are: "<<ds<<endl;
	cout<<"object oriented programming marks are: "<<oop<<endl;
	cout<<"Total Marks are: "<<total<<endl;
	cout<<"Average marks of the student are: "<<avg<<"%"<<endl;
	}

int main()
{
	string name;
	int sub1, sub2,sub3;
	cout<<"Enter Name Of the Student: ";getline(cin,name);
	cout<<"Enter marks Of the 1st subject: ";cin>>sub1;
	cout<<"Enter marks Of the 2nd subject: ";cin>>sub2;
	cout<<"Enter marks Of the 3rd subject: ";cin>>sub3;
	cout<<"------------------------    OUTPUT RESULTS ----------------------------------------------------\n";
	stud std1(name,sub1,sub2,sub3);
	std1.display();
	 
}
