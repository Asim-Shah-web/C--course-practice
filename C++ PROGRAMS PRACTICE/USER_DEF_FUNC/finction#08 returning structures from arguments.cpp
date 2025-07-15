/*  RETURNING THE VALUE*/
#include<iostream>
#include<string>
using namespace std;
struct asim
{
	string name;
	int age;
};
asim fun(void);
int main()
{  
    asim store;
    store=fun();
	cout<<"your name: "<<store.name<<endl;
	cout<<"your age: "<<store.age<<endl;
	cout<<"ok\n";
	
}
asim fun(void)
{
	asim xyz;
	cout<<"Enter name: "<<endl;
	getline(cin,xyz.name);
	cout<<"Enter age: "<<endl;
	cin>>xyz.age;
	return (xyz);
}

