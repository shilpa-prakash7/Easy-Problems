#include <iostream>

using namespace std;

int main()
{
    int n, prod = 1; //Declaring variable for n and initialising prod as 1

    cout << "Enter how many natural numbers to be multiplied: ";
    cin >> n;    //Stores the user input in variable n

    for (int i=1; i<=n; i++)  //Using For loop to go through the first n natural numbers
    {
        prod *= i;  //Multiplies each number and stores in prod
    }

    //Printing the product of n numbers
    cout << "\nThe product of first " << n << " Natural numbers = " << prod;

}
