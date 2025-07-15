#include<iostream>
using namespace std;
int main()
{
	float *p = new float(40.43);
	cout<<"The value at address p is: "<<*p<<endl;
	int *(ptr) = new int[3];
	ptr[0] = 90;  //*ptr=98;
	ptr[1] = 92;
	ptr[2] = 94;
	cout<<"The value at address ptr[0] is: "<<ptr[0]<<endl;
	cout<<"The value at address ptr[1] is: "<<ptr[1]<<endl;
	cout<<"The value at address ptr[2] is: "<<ptr[2]<<endl;
	delete[] ptr;
	cout<<"The value at address ptr[0] is: "<<ptr[0]<<endl;
	cout<<"The value at address ptr[1] is: "<<ptr[1]<<endl;
	cout<<"The value at address ptr[2] is: "<<ptr[2]<<endl;
	
	return 0;
}

