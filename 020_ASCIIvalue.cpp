#include <iostream>

using namespace std;

int main()
{
    char a; //Declaring a character variable a

    cout << "Enter a character: ";
    cin >> a;   //Gets the character from the user and stores in a

    cout << "\nThe ASCII value of " << a << " is " << int(a);   //Prints the ASCII value by casting it to an integer
}
