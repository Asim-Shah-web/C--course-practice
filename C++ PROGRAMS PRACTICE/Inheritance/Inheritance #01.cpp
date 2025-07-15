#include<iostream>
using namespace std;
class employee
{
	public:
		int id;
		float salary;
		employee(int inpid)
		{
			id=inpid;
			salary=34;
		}
		employee()
		{
		}
};
class programmer : public employee   // default visibility mode is private 
{
	public:
		int languagecode;
		programmer(int inpid)
		{
			id=inpid;
			languagecode=9;
		}
		void getid()
		{
			cout<<"Your id is = "<<id<<endl;
		}
};
int main()
{
	employee amir(1),rohan(2);
	cout<<amir.salary<<endl;
	cout<<rohan.salary<<endl;
	programmer skillf(10);
	cout<<skillf.id<<endl;
	cout<<skillf.languagecode<<endl;
	skillf.getid();
	return 0;
}
