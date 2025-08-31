#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Enter a number(1-7) to check the day of the week: ";
    cin >> n;   //Gets the number from the user

    //Using switch to check the number with each case and print the correct day
    switch(n)
    {
        case 1:
            cout << "\nMonday";
            break;
        case 2:
            cout << "\nTuesday";
            break;
        case 3:
            cout << "\nWednesday";
            break;
        case 4:
            cout << "\nThursday";
            break;
        case 5:
            cout << "\nFriday";
            break;
        case 6:
            cout << "\nSaturday";
            break;
        case 7:
            cout << "\nSunday";
            break;
        default:
            cout << "\nInvalid number!";  //Default case that prints when a different number is received
    }
    return 0;
}