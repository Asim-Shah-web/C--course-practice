#include<iostream>
using namespace std;
class mycl{
	public:
		int x;
		mycl(int i) : x(i){
		}
			
		
};
int main(){
	const mycl constobj(10);
//	constobj.x=20;               //this will result in an error
cout<<"constant object value: "<<constobj.x<<endl;

}
