#include <iostream>

using namespace std;

int main()
{
    int n1, n2, temp;

    cout << "Enter first number: ";
    cin >> n1;  //Getting the first number from the user

    cout << "Enter second number: ";
    cin >> n2;  //Getting the second number from the user

    //Printing the numbers before swapping
    cout << "\nBefore swapping -" << endl;
    cout << "\nFirst number: " << n1 << endl;
    cout << "Second number: " << n2 << endl;

    //Swapping the variables
    temp = n1;  //Storing the first number in a temporary variable
    n1 = n2;    //Assigning the second number as the first number
    n2 = temp;  //Assigning the first number, stored in the temp variable, as the second number

    //Printing the numbers after swapping
    cout << "\nAfter swapping -" << endl;
    cout << "\nFirst number: " << n1 << endl;
    cout << "Second number: " << n2;
}
