#include<iostream>

using namespace std;
class B;
class A
{
	public:
		class a():a(12){}
	private:
		int a;
		friend int add(A,B);
}:
class B
{
	public:
		B():b(1){}
	private:
    int b;
    friend int add(A,B);
};
 int add(A obj1, Bobj2)
 {
 	return (obj1.a()+obj2.b);
 }
	int main()
{
	A obj 1;
	B obj 2;
	cout<<"sum "<<add(obj1,obj2);
}	
