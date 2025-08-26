#include <iostream>

using namespace std;

int main()
{
    double r, circ; //Declaring variables using double datatype for decimal numbers

    cout << "Enter the radius of the circle: ";
    cin >> r;   //Gets the radius of the circle from the user

    //Calculating Circumference using formula 2*pi*r
    circ = 2*3.14*r;  //pi is taken as 3.14
                        
    cout << "\nCircumference = " << circ;   //Prints the circumference
}