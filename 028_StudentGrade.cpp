#include <iostream>

using namespace std;

int main()
{
    int marks;    //Declaring variable for storing marks

    cout << "Enter you marks (from 0-100): ";
    cin >> marks;   //Gets the marks from the user
    cout << "\n";

    //Uisng If and Else if conditions to to check the range of the marks and print the grade accordingly
    if (marks>90)  
    {
        cout << "Grade - A1";   
    }
    else if (marks>80)
    {
        cout << "Grade - A2";
    }
    else if (marks>70)
    {
        cout << "Grade - B1";
    }
    else if (marks>60)
    {
        cout << "Grade - B2";
    }
    else if (marks>50)
    {
        cout << "Grade - C1";
    }
    else if (marks>40)
    {
        cout << "Grade - C2";
    }
    else if (marks>=30)
    {
        cout << "Grade - D";
    }
    else if (marks<30)
    {
        cout << "FAIL";    //If marks less than 30, FAIL
    }
    return 0;
}