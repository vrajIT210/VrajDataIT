#include<iostream>
using namespace std;
class student{
	public:
		int rollNo;
		string name;
		user(){
			cout<<"Enter student name : "<<endl;
			cin>>name;
			cout<<"Enter rollNo : "<<endl;
			cin>>rollNo;
		}
};
class Marks:public Student{
	public:
		print(){
		int maths:83;
		int science:91;
		int ss:71;
		int english:93;
	}
};


class Average:public Marks{
	public:
		final(){
			int total=Marks.maths+Marks.science+Marks.ss+Marks.english
			cout<<"total"<<endl;
			int avg=total/4;
			cout<<"avg"<<endl;
		}
		
};
main(){
	Average obj;
	obj.user();
	obj.print();
	obj.final();
}
