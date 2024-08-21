#include<iostream>
using namespace std;
class a{
	public:
		fun(){
			cout<<"This is parent class"<<endl;
		}
};
class b:public a{
	public:
		fun1(){
			cout<<"This is child class";
		}
};
main(){
	b obj;
	obj.fun();
	obj.fun1();
	
}
