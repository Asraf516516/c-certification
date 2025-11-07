#include<iostream>
using namespace std;
class Demo
{
	int n;
	public:
		Demo(int x)
		{
			n = x;
			
		}
		Demo operator-()
		{
			return Demo(-n);
			
		}
		void display()
		{
			
			cout << "value = "<< n <<endl;
			
		}
};
int main()
{
	Demo ob1(5);
	Demo ob2 = -ob1;
	
	cout << "original oblect: ";
	ob1.display();
	
	cout << "after applying unary minus: ";
	ob2.display();
	return 0;
	
}
