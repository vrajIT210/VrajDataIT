#include<iostream>
using namespace std;
class myclass{
	public:
		int a,b;
		fuc1()
		{
			cout<<"enter A : ";
			cin>>a;
			cout<<"enter B : ";
			cin>>b;
			cout<<"Addition is : "<<a+b;
		}
		fuc2()
		{
			cout<<"enter A : ";
			cin>>a;
			cout<<"enter B : ";
			cin>>b;
			cout<<"substraction is : "<<a-b;	
		}
		fuc3()
		{
			cout<<"enter A : ";
			cin>>a;
			cout<<"enter B : ";
			cin>>b;
			cout<<"multiplication is : "<<a*b;
		}
};
main()
{
	myclass obj;
	obj.fuc1();
	obj.fuc2();
	obj.fuc3();
}
