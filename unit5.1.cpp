#include<iostream>
using namespace std;
int main()
{
int a,b,res;
cout<<"enter a,b";
cin>>a>>b;
res = a-b;

try
{
        if (res != 0)
        {
            cout << "Result: " << a / res << endl;
        }
        else
        {
            throw(res);  
        }
    }
    catch (int x)
    {
        cout << "Division by zero error" << endl;
    }

    cout << "Successful termination" << endl;

    return 0;
}
