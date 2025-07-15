#include<iostream>
using namespace std;
class Example
{
	public:
		Example()
		{
			cout<<"The control of program is in the constructor\n";
			cout<<"Constructor called....\n";
		}
		~Example()
		{
			cout<<"The control of program is in the destructor\n";
			cout<<"Destructor called.....\n";
		}
};
int main()
{
cout<<"I am in the body of main function....\n";
Example obj1, obj2;	
cout<<"I am back in the body of main function\n";
return 0;
}
