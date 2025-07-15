#include<iostream>
#include<conio.h>
using namespace std;
struct asim
{
	int rollno;
	string name;
	string addrs;
};
int main()
{
	int n;
	cout<<"ENTER TOTAL STUDENTS"<<endl;
	cin>>n;
	asim rec[n];
	int i;
	for(i=0;i<n;i++)
	{
		cout<<"Enter Name of Student no "<<i+1<<endl;
		cin.ignore();
		getline(cin,rec[i].name);
		cout<<"Enter roll No "<<endl;
	    cin>>rec[i].rollno;
	    cout<<"Enter Address of student "<<endl;
	    cin.ignore();
		getline(cin,rec[i].addrs);
    }
    for(i=0;i<n;i++)
    {
	    cout<<"Student No "<<i+1<<" name: "<<rec[i].name<<endl;
	    cout<<"Student Roll No: "<<rec[i].rollno<<endl;
	    cout<<"Student Address: "<<rec[i].addrs<<endl;
    }
	getch();
}
