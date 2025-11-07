#include<iostream>
#include<fstream>
using namespace std;
int main()
{
ofstream file("cpp.txt", ios::in);
file << "Welcome to cpp class";
cout << "file is created";
return 0;
}
