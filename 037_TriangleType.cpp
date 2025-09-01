#include <iostream>

using namespace std;

int main()
{
    double a, b, c; //Declaring variables for three sides

    //Getting each side from the user
    cout << "Enter first side: ";
    cin >> a;
    cout << "Second side: ";
    cin >> b;
    cout << "Third side: ";
    cin >> c;

    //Checking condition for equilateral triangle using the AND operator
    if (a==b && b==c && a==c)
    {
        cout << "It is an Equilateral triangle.";
    }
    //Checking condition for isosceles triangle using the OR operator
    else if (a==b || b==c || a==c)
    {
        cout << "It is an Isosceles triangle.";
    }
    //Checking condition for scalene triangle using the AND operator
    else if (a!=b && b!=c && a!=c)
    {
        cout << "It is a Scalene triangle.";
    }
    return 0;
}