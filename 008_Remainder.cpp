#include <iostream>

using namespace std;

int main()
{
    int dividend, divisor, remainder;

    cout << "Enter the Dividend: ";
    cin >> dividend;   //Gets the number to be divided

    cout <<  "Enter the Divisor: ";
    cin >> divisor;    //Gets the number to be divided with

    remainder = dividend % divisor;  //Calculates the remainder using the modulus operator

    cout << "The remainder is " << remainder;   //Printing the remainder
}   
