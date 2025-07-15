#include<iostream>
#include<string>
using namespace std;

class emp{
	private:
	      int id;
	      static int count;//=10;      // by default the value of static member function is 0.
	public:
		void setid()
		{
			cout<<"\nEnter id of the employee: ";
			cin>>id;
			count++;
		}
		void show()
		{
			cout<<"\nThe id of this employee is: "<<id<<" and this employee number is: "<<count<<endl;
		}
		static void getcount();  //declaration of static member function
};
int emp::count=1000;      // count is the static data member of class employee and its default value is 0.
 void emp::getcount(void)          //static member function
{
	//cout<<id; //throws an error
	cout<<"The value of count is: "<<count<<endl;
}

int main()
{
//	emp asim,afan,dar;
//	asim.id=1;      // cannot do this bcz id and count is private.
/*	asim.setid();
	asim.show();
	emp::getcount();
	
	afan.setid();
	afan.show();
    emp::getcount();
	
	dar.setid();
	dar.show();
	emp::getcount();                    */
	emp f[5];     // Arrays of objects.
	for(int i=0;i<5;i++)
	{
		f[i].setid();
		f[i].show();
		emp::getcount();
	}
}
