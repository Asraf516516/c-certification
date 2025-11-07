#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ifstream file("GFG.txt"); 
    if (!file.is_open()) 
    {
    	 cerr<<"The file is not found: "<<endl;
	}
    string s;
    while (getline(file, s)) 
	{
        cout << "Read string: "<<s;  
    }

    file.close(); 
    return 0;
}

