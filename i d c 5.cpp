#include <iostream>
using namespace std;

void num(int x)
{
    try
    {
        if (x == 0)
        {
            throw(5);          
        }
        else if (x == 1)
        {
            throw('s');        
			        }
        else if (x < 0)
        {
            throw(5.4);        
        }
        else
        {
            cout << "No exception thrown" << endl;
        }
    }
    catch (int i)
    {
        cout << "Integer value caught" << endl;
    }
    catch (char c)
    {
        cout << "Char value caught" << endl;
    }
    catch (double d)
    {
        cout << "Double value caught" << endl;
    }
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    num(n);

    cout << "Program is ended" << endl;
    return 0;
}

