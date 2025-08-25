#include <iostream>

using namespace std;

int main()
{
    int n1, n2; //Declaring variables to store two numbers

    cout << "Enter a number: ";
    cin >> n1; //Gets the first number from user

    cout << "Enter another number: ";
    cin >> n2;  //Gets the second number from user

    //Comparison using If-Else statements
    if (n1>n2)  //Checks if n1 is greater than n2
    {
        cout << "\n" << n1 << " is the Largest number."; //If true then print
    }
    else if (n2>n1) //Checks if n2 is greater than n1
    {
        cout << "\n" << n2 << " is the Largest number."; //If true then print
    }
    else 
    {
        cout << "\nBoth are equal!";  //Else both numbers are equal
    }
}