#include <iostream>
using namespace std;
int main()
{
    char x, d, m, a, s;
    float f, b;
    cout << "what do you want to do?" << endl
         << "type d for divide,m for multiply,a for addition,s for subtraction: ";
    cin >> x;
    if (x == 'a')
    {
        cout << "enter first number" << endl;
        cin >> f;
        cout << "enter second number" << endl;
        cin >> b;
        cout << f + b;
    }
    else if (x == 's')
    {
        cout << "enter first number" << endl;
        cin >> f;
        cout << "enter second number" << endl;
        cin >> b;
        cout << f - b;
    }
    else if (x == 'm')
    {
        cout << "enter first number" << endl;
        cin >> f;
        cout << "enter second number" << endl;
        cin >> b;
        cout << (f * b);
    }
    else if (x == 'd')
    {
        cout << "enter first number" << endl;
        cin >> f;
        cout << "enter second number" << endl;
        cin >> b;
        cout << f / b;
    }
    else
    {
        cout << "invalid input";
    }
}