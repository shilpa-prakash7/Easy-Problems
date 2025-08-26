#include <iostream>
#include <iomanip>  //Including iomanip to manipulate the output format

using namespace std;

int main()
{
    double r, area; //Declaring variables using double datatype for decimal numbers

    cout << "Enter the radius of the circle: ";
    cin >> r;   //Gets the radius of the circle from the user

    //Calculating area using formula pi*r*r
    area = 3.14*r*r;  //pi is taken as 3.14
    
    //Printing the area with at most 2 digits after decimal point
    cout << "\nArea of the circle = " << fixed << setprecision(2) << area;
}