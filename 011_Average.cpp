#include <iostream>

using namespace std;

int main()
{
    int n1, n2, n3, avg; //Declaring variables for the numbers and average value

    cout << "Enter the first number: ";
    cin >> n1; //Stores the first number entered by user

    cout << "Enter the second number: ";
    cin >> n2;  //Stores the second number

    cout << "Enter the third number: ";
    cin >> n3;  //Stores the third number

    avg = (n1 + n2 + n3)/3; //Calculates average and stores in avg

    cout << "Average = " << avg;
}