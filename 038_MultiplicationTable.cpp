#include <iostream>
using namespace std;

int main()
{
    int n, last;   //Variables for the number and the last number to be multiplied with

    cout << "Which number's multiplication table do you want?" << endl;
    cin >> n;

    cout << "What is the last number to be multiplied with?" << endl;
    cin >> last;

    cout << "\nMultiplication Table of " << n << endl;

    //Using for loop to iterate through all the numbers
    for (int i=1; i<=last; i++)
    {
        int result=n*i; //Performing the multiplication
        cout << n << "*" << i << "=" << result << endl;
    }
    return 0;
}