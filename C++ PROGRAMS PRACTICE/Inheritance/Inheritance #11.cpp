#include<iostream>
using namespace std;
class test
{
	int b,a;                                 //      declaration of b is first bcz of the list initializer a(i+b)
	public:
//		test(int i,int j) : a(i),b(j)
 //     test(int i,int j) : a(i),b(j+i)
//      test(int i,int j) : a(i),b(j+a)
  //    test(int i,int j) : a(i+1),b(j)
//  	test(int i,int j) : a(i+j),b(j)
	    test(int i,int j) : b(j),a(i+b)
		{
			cout<<"Constructor executed.......... "<<endl;
			cout<<"The value of a is : "<<a<<endl;
			cout<<"The value of b is : "<<b<<endl;
		}
};
int main()
{
	test t(5,6);
}
