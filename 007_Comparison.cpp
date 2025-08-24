#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Enter your number: ";
    cin >> num; //Gets the number from user

    if (num>0)  //Using If statement to check if number greater than 0
    {
        cout << num << " is greater than 0";    //If true then prints this
    }
    else if (num<0) //Using Else if to check if number less than 0
    {
        cout << num << " is less than 0";   //If true then prints this
    }
    else if (num==0)    //Checking if number equal to 0
    {
        cout << "Your number is 0"; //Prints this if true
    }
}
