#include <iostream>

using namespace std;

int main()
{
    int length, width, area;    //Declaring the variables for length, width, and area
    cout << "Enter length: ";
    cin >> length;  //Stores the length
    cout << "Enter width: ";
    cin >> width;   //Stores the width

    area = length * width;  //Calculating the area of the rectangle
    
    cout << "The area of the rectangle is " << area;    //Prints the area as output
}
