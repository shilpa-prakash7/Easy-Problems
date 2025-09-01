#include <iostream>

using namespace std;

int main()
{
    int n;
    int factorial=1;  //Initialising the factorial as 1

    cout << "Enter a positive integer: ";
    cin >> n;   //Gets the number from the user

    //Calculating the factorial using for loop
    for (int i=1; i<=n; i++)
    {
        factorial*=i;
    }
    cout << "Factorial of " << n << " = " << factorial;
    return 0;
}