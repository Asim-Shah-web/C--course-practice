#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	char st[25];
    int len(char*);
	cout<<"Enter any string: "<<endl;
	gets(st);
	cout<<"The length of the string is: "<<len(st);
	
}
int len(char* x)
{
	int c=0;
	while(*x!='\0')
	{
		c++;
		*x++;
	}
	return c;
}

