#include<iostream>
#include<string>
using namespace std;

class  st
{
private:
     int id;
	 int salary;
	 static int count;
public:
	
    st()
    {   
        count++;
        getcount();
    	cout<<"The id of employee is: ";
    	cin>>id;
    	cout<<"The Salary of Employee is: ";
    	cin>>salary;
	}
    static void getcount()
    {
    	cout<<"The value of count is: "<<count<<endl;
	}
	void print(){
		cout<<"\n\nThe id of employee is: "<<id<<endl;
    	cout<<"The Salary of Employee is: "<<salary<<endl;
	}
};
// Count is the static data member of class static;
int st::count;   //default value is 0;
int main()
{   
    int n;
	cout<<"Enter the number of employees: ";
	cin>>n;
	st s[n];
	for (int i=0;i<n;i++)
	{
	  s[i].print();
	}
}
