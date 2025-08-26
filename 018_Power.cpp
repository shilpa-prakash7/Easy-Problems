#include <iostream>
#include <cmath>    //Including the math library

using namespace std;

int main()
{
    int num, power;

    cout << "Enter a number: ";
    cin >> num; //Gets the number from the user

    cout << "Enter the exponent: ";
    cin >> power;   //Gets the exponent from the user

    //Using pow function to calculate and print the power
    cout << "\n" << num << " to the power of " << power << " is " << pow(num,power);
}