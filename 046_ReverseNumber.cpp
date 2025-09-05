#include <iostream>

using namespace std;

int main()
{
    int num, remainder; //Declaring variables for the number and remainder
    int  revnum = 0;   //Initialising the reversed nmumber value as 0

    cout << "Enter an integer: ";
    cin >> num;   //Gets the number from the user

    while (num>0)  //As long as the number is not 0
    {
        remainder=num%10;  //Geting the last digit
        revnum=revnum*10+remainder;  //Appending it to revnum
        num/=10;  //Removing the last digit
    }
    cout << "Reversed Number: " << revnum;
    
    return 0;
}