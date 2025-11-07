#include<iostream>
using namespace std;
class student {
	public:
		string name;
		int rollno;
		student (string n,int r) {
			name =n;
			rollno = r;
			cout <<"constructor" << name << endl;
			
		}
		void display() {
			cout << "name" << name <<",rollno" << rollno << endl;
		}
		~student() {
			cout << " destructor" << name << endl;
		}
		
		
		
};
int main() {
{
		student s1("U Asraf",516);
	s1.display();
}
return 0;
}
