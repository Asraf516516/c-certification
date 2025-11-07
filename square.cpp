#include<iostream>
using namespace std;
inline void display(int a)
{
	int display;
	display=a*a;
	cout<<display;
	
}
int main()
{
	int a;
	cout<<"Enter a";
	cin>>a;
    display(10);
    display(20);
    display(30);
	return 0;
}
