#include <iostream>
#include <string>    //To include the String library

using namespace std;

int main()
{
    string name;    //Declaring String variable name
    cout << "Enter your name: ";
    cin >> name;    //Storing the user input to name variable

    cout << "Hello, " << name << "!";    //Printing the message with name
}
