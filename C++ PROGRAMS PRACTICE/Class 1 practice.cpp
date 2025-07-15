#include<iostream>
#include<conio.h>
using namespace std;
class date{
	private:
		int y,m,d;
	public:
		void setdata();
		void getdata();
};
void date::setdata(){                             //using scope resolution operator
 cout<<"Enter day:"<<endl;
 cin>>d;
 cout<<"Enter Month:"<<endl;
 cin>>m;
 cout<<"Enter Year:"<<endl;
 cin>>y;
}
void date::getdata(){
	cout<<"------------------Date:  "<<d<<"/"<<m<<"/"<<y<<"   --------------------\n";
}
int main(){
	date d1;
	d1.getdata();
	d1.setdata();
	d1.getdata();
	getch();
}
