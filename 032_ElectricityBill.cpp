#include <iostream>

using namespace std;

int main()
{
    int units;
    double bill = 0;    //Initialising the bill amount as 0

    cout << "Enter the units of electricity consumed: ";
    cin >> units;   //Gets the units of electricity consumed from the user

    //Using If & Else if statements to check the units and calculate the bill accordingly
    if (units<=100)
    {
        bill = units*1.5;
    }
    else if (units<=200)
    {
        bill = (100*1.5)+((units-100)*2.5);
    }
    else if (units<=300)
    {
        bill = (100*1.5)+(100*2.5)+((units-200)*4);
    }
    else
    {
        bill = (100*1.5)+(100*2.5)+(100*4)+((units-300)*6);
    }
    cout << "Bill = " << bill;  //Prints the bill
    return 0;
}