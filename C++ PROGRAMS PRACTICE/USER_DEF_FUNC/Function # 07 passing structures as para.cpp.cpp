#include<iostream>
#include<stdio.h>
#include<string>
void rec(struct xyz);
using namespace std;
struct xyz
{
	string name;
	int age;
};
int main()
{
	xyz s1;
	cout<<"Enter ur name: \n";
	getline(cin,s1.name);
	cout<<"enter ur age: \n";
	cin>>s1.age;
	rec(s1);
}
void rec(xyz t)
{
	cout<<"your name is: "<<t.name<<endl;
	cout<<"your age is: "<<t.age<<endl;
}
