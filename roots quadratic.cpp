#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c,des,root1,root2;
	cout<<"Enter a,b,c values: ";
	cin>>a>>b>>c;
	des= (b*b-4*a*c);
	if(des==0)
	{
		root1=root2=-b/(2*a);
		cout << "Roots are real and equal: " << root1 << " " << root2;
	}
	else if(des>0)
	{
		root1=(-b+ sqrt(des))/(2*a);
		root2=(-b- sqrt(des))/(2*a);
		cout << "Roots are real and distinct: " << root1 << " " << root2;
	}
	else
	{
		cout<<"roots are imaginary";
	}
	
	return 0;
}
