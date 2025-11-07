#include <iostream>
using namespace std;

class Student {
    int rollNo;
    string name;

public:
    void getData() {
        cout << "Enter Roll No and Name: ";
        cin >> rollNo >> name;
    }

    void display() {
        cout << "Roll No: " << rollNo << ", Name: " << name << endl;
    }
};

int main() {
    Student s[3]; 

    for (int i = 0; i < 3; i++) {
        s[i].getData(); 
    }

    cout << "Student Details:" << endl;

    for (int i = 0; i < 3; i++) {
        s[i].display(); 
    }

    return 0;
}
