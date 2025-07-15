#include<iostream>
using namespace std;
int main()
{
	char s1[25],s2[25],s3[50];
	cout<<"Enter the 1st string: "<<endl;
	gets(s1);
	cout<<"Enter the 2nd string: "<<endl;
	gets(s2);
	void com(char*,char*,char*);
	com(s3,s1,s2);
	cout<<"combined string: "<<s3<<endl;	
}

void com(char* x,char* y,char* z)
{
	while(*y!='\0')
	{
		*x++=*y++;	
	}
	while(*z!='\0')
	{
		*x++=*z++;
	}
}
