#include <iostream>

using namespace std;

int main()
{
    char ch;

    char vow[] = {'a','e','i','o','u','A','E','I','O','U'};   //Initialising array of vowels both upper and lowercase

    cout << "Enter a character: ";
    cin >> ch;  //Gets character from the user

    for (int i=0; i<sizeof(vow); i++)   //Iterates through the vow array till the end using sizeof function
    {
        if (ch==vow[i])  //Checks if the character is equal to the element in the array
        {
            cout << ch << " is a vowel";    //If yes then prints it's a vowel
            return 0;   //Exits the program
        }
    }
    
    //If loop finishes without finding a match then prints the below
    cout << ch << " is a consonant";    
}