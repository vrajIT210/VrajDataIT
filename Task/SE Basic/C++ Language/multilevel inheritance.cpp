#include<iostream>
using namespace std;
class Grandparent{
	public:
		home(){
			cout<<"My grandparent purchased home"<<endl;
		}
};
class Parent:public Grandparent{
	public:
		car(){
			cout<<"Father purchased Car"<<endl;
		}
};
class Son:public Parent{
	public:
		respect(){
			cout<<"Son earned respect"<<endl;
		}
};
main(){
	Son obj;
	obj.home();
	obj.car();
	obj.respect();
	
}
