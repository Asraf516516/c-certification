#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream file("GFG.txt");
	string s;
	file>>s;
	cout<<"READ string: "<<s;
	return 0;
}
