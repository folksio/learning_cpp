#include <iostream>
using namespace std;
int main()
{
    int n, i = 2;
    cout << "enter the number: ";
    cin >> n;
    while (i < n)
    {
        if (n % i == 0)
        {
            cout << n << " is not prime because it is devisable by " << i << endl;
        }
        else
        {
            cout << n << " is a prime number" << endl;
        }
        i = i + 1;
    }
}