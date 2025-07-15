#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
class bill{
	private:
		int m,l;
	public:                          
		void asin(int w,int e)  
		{
			m=w;
			l=e;
		}
		bill() : m(0),l(0)                           //initialing data
		{
			cout<<"constructor called..........\n";
		}
		void print()
		{
				int q;
			    q=m+l;
			cout<<"sum of 1st and 2nd is: "<<q<<endl;
		}
		
};
int main()
{
	bill b1,b2;
	b1.print();
	b2.print();
	b1.asin(58,20),b2.asin(29,19);
	b1.print();
	b2.print();
	getch();
}

