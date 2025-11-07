#include<iostream>
using namespace std;

class Student {
    public:
         int roll;
        Student(int r) {
            roll = r;
            cout << "Roll number is " << roll << endl;
        }
};

int main() {
    int r;
    cout << "Enter roll number: ";
    cin >> r;
    Student s1(r);
   return 0;
}
