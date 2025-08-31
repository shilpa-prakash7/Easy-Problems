#include <iostream>
#include <cctype>   //To use the isalpha function

using namespace std;

int main()
{
    char ch;

    cout << "Enter a character: ";
    cin >> ch;  //Gets a character from the user

    if (isalpha(ch))   //Using isalpha to check whether it's an alphabet or not
    {
        cout << ch << " is an alphabet.";
    }
    else
    {
        cout << ch << " is not an alphabet.";
    }
    return 0;
}