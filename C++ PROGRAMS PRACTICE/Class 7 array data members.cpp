#include<iostream>
#include<string>
using namespace std;

class shop{
	private:
		int itemid[100];
		int itemprice[100];
		int counter;
	public:
		void initcount(void){ counter=0;}
		void setdata(void);
		void display(void);
};
void shop::setdata(){
	cout<<"Enter id of your item no "<<counter+1<<" : ";
	cin>>itemid[counter];
	cout<<"\nEnter price of your item no "<<counter+1<<" : ";
	cin>>itemprice[counter];
	counter++;
}
void shop::display(){
	for(int i=0;i<counter;i++)
	{
		cout<<"\nThe price of item with id no: "<<itemid[i]
		<<" is : "<<itemprice[i]<<"$"<<endl;
	}
}
int main(){
	shop s1;
	s1.initcount();
	s1.setdata();
	s1.display();
}
