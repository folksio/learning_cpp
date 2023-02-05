#include <iostream>
using namespace std;
int main()
{
    int a, i, j;
    cin >> a;
    i = 1;
    while (i <= a)
    {
        int j = 1;
        while (j <= i)
        {
            cout << "@";
            j = j + 1;
        }
        i = i + 1;
        cout << endl;
    }
}
