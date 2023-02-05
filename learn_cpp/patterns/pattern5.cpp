#include <iostream>
using namespace std;
int main()
{
    int n, i = 1, j, c = 1;
    cin >> n;
    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            cout << c<<" ";
            c = c + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}