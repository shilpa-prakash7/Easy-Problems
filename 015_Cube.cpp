#include <iostream>
#include <cmath> //Including the math library for pow function

using namespace std;

int main()
{
    int num;    //Declaring variable num

    cout << "Enter a number to be cubed: ";
    cin >> num;   //Gets the number to be cubed from user

    cout << "\nCube of " << num << " = " << pow(num,3);  //Prints the cube using the pow function
}