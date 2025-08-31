#include <iostream>
#include <cctype>   //To use the isdigit function

using namespace std;

int main()
{
    char ch;

    cout << "Enter a character: ";
    cin >> ch;  //Gets a character from the user

    if (isdigit(ch))   //Using isdigit to check whether it's a digit or not
    {
        cout << ch << " is a digit.";
    }
    else
    {
        cout << ch << " is not a digit.";
    }
    return 0;
}