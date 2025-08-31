#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;   //Gets the number from the user

    int sum = 0;   //Initialising sum as 0 for calculation

    for (int i=1; i<n; i++)    //Iterating through numbers
    {
        //If a number is a divisor then add it to the sum
        if (n%i==0)
        {
            sum+=i;    
        }
    }

    if (sum==n)    //Checking if the sum of all divisors is equal to the number itself
    {
        cout << n << " is a perfect number.";   //If yes then it's a perfect number
    }
    else
    {
        cout << n << " is not a perfect number.";   //Else it's not
    }
    return 0;
}