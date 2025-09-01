#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;

    cout << "Enter a number to check if it's prime or not: ";
    cin >> n;

    if (n<2)   //Eliminating 0 and 1 first if that's the number entered
    {
        cout << "It is not prime.";   //they are not prime
    }

    //Iterating till the square root of the number
    for (int i=2; i<=sqrt(n); i++)
    {
        //If any number can divide the given number then it is not prime
        if (n%i==0)
        {
            cout << "It is not prime.";
            return 0;   //Exit the program if a number divides
        }
    }
    //The loop has completed without exiting in between
    cout << "It is prime.";   //then the number is prime
}