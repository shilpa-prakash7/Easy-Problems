#include <iostream>

using namespace std;

int main()  //Main function
{
    int celsius, fahrenheit;   //Declaring variables for storing Celsius & Fahrenheit
    cout << "Enter the temperature in Celsius: ";
    cin >> celsius; //Stores the temperature input in Celsius

    fahrenheit = (celsius*9/5)+32;  //Using formula to convert Celsius to Fahrenheit

    cout << celsius << " degree Celsius is " << fahrenheit << " degree Fahrenheit";
}
