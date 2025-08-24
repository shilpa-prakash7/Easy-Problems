#include <iostream>

using namespace std;

int main()
{
    double principal, rate, time, SI;   //Declaring the necessary variables as double datatype

    cout << "Enter the Principal amount: ";
    cin >> principal;   //Stores the input Principal amount

    cout << "Enter the Rate of interest in %: ";
    cin >> rate;    //Stores the input Rate of interest

    cout << "Enter the number of years:  ";
    cin >> time;    //Stores the input number of years

    SI = (principal*rate*time)/100; //Calculating the Simple interest

    cout << "The Simple interest is " << SI;    //Prints the Simple interest
}