#include<iostream>
using namespace std;

class student
{
    public:
        int roll;
        student(int r)
        {
            roll = r;
        }
        void show()
        {
            cout << "Roll No is " << roll << endl;
        }
};

int main()
{
    int r;
    cin >> r;
    student s1(r);  
    s1.show();      
    return 0;
}
