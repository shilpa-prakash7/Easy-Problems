#include <iostream>

using namespace std;

int main()
{
    int num, power;
    
    cout << "Enter a number: ";
    cin >> num; //Gets the number from the user

    int result = num;   //Storing the number in another variable result for looping

    cout << "Enter the exponent: ";
    cin >> power;   //Gets the exponent from user

    //Using For loop to calculate the power
    for (int i=0; i<power; i++) //Checking the number of times the following action has to be done
    {
        result *= num;  //Performing the multiplication
    }

    cout << "\n" << num << " to the power of " << power << " is " << result;
}