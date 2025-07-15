#include<iostream>
#include<string>
using namespace std;
/* u can declare objects along with class declaration.
class employee{
}; asim,salman,safi;                 */
// NESTING OF MEMBER FUNCTION
class binary
{
	private:
		string s;
		void chk_bin();
	public:
	    void read();
		void replace();
		void display();	
};
void binary::read()
{
	cout<<"Enter your Number: ";
	getline(cin,s);
	cout<<endl;
}
void binary::chk_bin()
{
	for(int i=0;i<s.length();i++)
	{
		if(s.at(i)!='0' && s.at(i)!='1')
		{
			cout<<" incorrect binary format \n";
			exit(0);
		}
	}
}
void binary::replace()
{
	chk_bin();
	for(int i=0;i<s.length();i++)
	{
		if(s.at(i)=='0')
		{
			s.at(i)='1';
		}
		else if(s.at(i)='1')
		{
			s.at(i)='0';
		}		
    }
}
void binary::display()
{
	cout<<"\nHere is your binary number:  ";
	for(int i=0;i<s.length();i++)
	{
		cout<<s.at(i);
	}
	cout<<endl;
}
int main()
{
	binary b1;
	b1.read();
	b1.display();
	b1.replace();
	b1.display();
}
