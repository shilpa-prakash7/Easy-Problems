#include <iostream>

using namespace std;

int main()
{
    double a, b, c; //Declaring variables for three angles

    cout << "Enter angle A: ";
    cin >> a;   //First angle

    cout << "Enter angle B: ";
    cin >> b;   //Second angle

    cout << "Enter angle C: ";
    cin >> c;   //Third angle

    if (a+b+c==180)    //Checking if the sum of all angles=180
    {
        cout << "\nIt is a valid triangle!";    //If yes then valid
    }
    else
    {
        cout << "\nIt is not a valid triangle.";   //If not then invalid
    }
    return 0;
}