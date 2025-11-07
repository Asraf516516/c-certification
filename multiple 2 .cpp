#include<iostream>
using namespace std;
class A
{
	public:
		void base1()
		{
			cout<<"this is base class 1"<<endl;
			
		}
};
class B
{
	public:
		void base2()
		{
			cout<<"this is base class 2"<<endl;
			
			
		}
};
class C: public A,public B
{
public:
	void child()
	{
		cout<<"this is child class"<<endl;
		
	}
};
int main()
{
	C obj;
	obj.base1();
	obj.base2();
	obj.child();
	return 0;
}
