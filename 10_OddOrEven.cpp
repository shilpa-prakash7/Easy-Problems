#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;    //Stores the user input number in variable num

    if (num%2==0)   //Checks if the remainder of the number/2 is 0
    {
        cout << num << " is an Even number";    //If yes then prints it's an Even number
    }
    else if(num%2!=0)   //Checks if the remainder of the number/2 is not equal to 0
    {
        cout << num << " is an Odd number";     //If true then prints the number is Odd
    }
}