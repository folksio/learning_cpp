#include <iostream>
using namespace std;
int main()
{
    int i, n, j = 2;
    cin >> n;
    while (i <= n)
    {
        cout << i << " "
             << "odd";
        i = i + 2;
    }
    while (j <= n)
    {
        cout << j << " "
             << "even";
        j = j + 2;
    }
}