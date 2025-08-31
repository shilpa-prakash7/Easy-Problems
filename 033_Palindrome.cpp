#include <iostream>

using namespace std;

int main()
{
    string str, reversed;

    cout << "Enter a number to check if Palindrome or not:";
    cin >> str;  //Gets a number from user as string datatype

    for (int i=str.length()-1; i>=0; i--)   //Iterating from the end of the string
    {
        reversed+=str[i];   //Storing each character into the reversed variable
    }

    //Checking if both the original string and the reversed string are equal
    if (str==reversed)
    {
        cout << "\nIt is a palindrome!";  //If yes then it's a Palindrome
    }  
    else
    {
        cout << "\nIt is not a Palindrome.";  //Else it's not a Palindrome
    }
    return 0;
}