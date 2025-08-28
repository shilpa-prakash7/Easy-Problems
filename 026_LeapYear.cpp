#include <iostream>

using namespace std;

int main()
{
    int year;

    cout << "Enter a year to check if leap year or not: ";
    cin >> year;    //Gets the year to be checked from the user

    if (year%400==0)   //Checks if the year is divisible by 400
    {
        cout << year << " is a leap year.";  //If yes then prints it's a leap year
    }
    else if (year%4==0 && year%100!=0)   //Checks if the year is divisible by 4 and not divisible by 100
    {
        cout << year << " is a leap year.";  //If yes then it's a leap year
    }
    else
    {
        cout << year << " is not a leap year.";   //If both conditions not satisfied then it's not a leap year
    }
    
    return 0;
}