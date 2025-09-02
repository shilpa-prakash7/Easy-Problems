#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;

    cout << "Till which number do you want to print the prime numbers?" << endl;
    cin >> n;   //Getting the last number from the user

    cout << "\nPrime Numbers till " << n << endl;
    
    for (int i=2; i<=n; i++)   //For loop to check each number
    {
        bool isPrime=true;  //Initialising a boolean variable isPrime as true
        
        for (int j=2; j<=sqrt(i); j++)  //For loop to check if the number has other divisors
        {
            if (i%j==0)
            {
                isPrime=false;  //If yes then set isPrime to false
                break;
            }
        }
        //If the loop completes without executing the if statement then it's prime
        if (isPrime)
        {
            cout << i << endl;  //Then print the number
        }
    }
    return 0;
}