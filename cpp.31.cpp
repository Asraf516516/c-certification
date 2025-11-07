#include<iostream>
using namespace std;
int add(int a, int b);
int add(int a, int b, int c);
int add(int a, int b, int c, int d);
int main()
{
	cout<<"the sum of two number is   : "<<add(2,3)<<endl;
	cout<<"the sum of three number is : "<<add(2,3,4)<<endl;
	cout<<"the sum of four number is  : "<<add(2,3,4,5)<<endl;
	return 0;
}
int add(int a, int b)
{
	return a+b;
}
int add(int a, int b, int c)
{
	return a+b+c;
}
int add(int a, int b, int c, int d)
{
	return a+b+c+d;
}
