#include<iostream>
using namespace std;
class grandfather
{
	public:
		void g()
		{
			cout<<"this is grandfather class"<<endl;
			
		}
};
class father: public grandfather
{
	public:
		void f()
		{
			cout<<"this is father class"<<endl;
			
		}
};
class child: public grandfather
{
	public:
		void c()
		{
			cout<<"this is child class"<<endl;
			
		}
};
int main()
{
child c1;
father f1;
c1.g();
c1.c();
f1.g();
f1.f();

return 0;
	
}
