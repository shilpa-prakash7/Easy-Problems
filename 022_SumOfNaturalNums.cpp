#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0; //Declaring variable for n and initiating sum as 0

    cout << "Enter how many natural numbers to be added: ";
    cin >> n;    //Stores the user input in num variable

    for (int i=1; i<=n; i++)  //Using For loop to go through the first n natural numbers
    {
        sum += i;  //Adds each number to the sum variable
    }

    //Printing the sum of n numbers
    cout << "\nThe sum of first " << n << " Natural numbers = " << sum;
}