#include<iostream>
using namespace std;
class Add
{
	public:
		int a1,b1;
		Add(int a,int b)
		{
			a1=a;
			b1=b;
			
		}
		void add1()
		{
			int c=a1+b1;
			cout << "sum of two numbers is" <<c<<endl;
			
		}
		
};
int main()
{
	int a,b;
	cout << "enter the two numbers";
	cin>>a>>b;
	Add a2(a,b);
a2.add1();
return 0;
}
