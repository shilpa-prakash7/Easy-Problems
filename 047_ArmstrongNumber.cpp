#include <iostream>
#include <cmath>    //cmath for calculating power

using namespace std;

int main()
{
    int num, sum = 0;
    
    cout << "Enter a 3-digit integer: ";   //Prompting user to enter a 3-digit number
    cin >> num;

    int originalNum = num;    //Storing the number in an Original Number variable

    while (num>0)   //While the number is greater than 0
    {
        int digit = num % 10;   //Getting the last digit
        sum = sum + pow(digit,3);   //Adding the cube of the digit to sum
        num /= 10;  //Removing the last digit
    }

    if (sum == originalNum)    //If the sum equals the original number
    {
        cout << "\nIt is an Armstrong Number!";   //It's an Armstrong number
    }
    else
    {
        cout  << "\nIt is not an Armstrong Number.";   //Else it's not
    }

    return 0;
}