#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Enter an integer: ";
    cin >> n;

    if (n%5==0)
    {
        if (n%11==0)
        {
            cout << n << " is divisible by 5 & 11";
            return 0;
        }
    }
    else
    {
        cout << n << " is not divisible by 5 & 11";
    }
}