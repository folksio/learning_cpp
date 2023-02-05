#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0, i = 0;
    cin >> n;
    while (i <= n)
    {if(i%2==0);
        sum = sum + i;
        i = i + 2;
    }
    cout << sum;
}