#include <iostream>

using namespace std;

int main()
{
    int marks;

    cout << "Enter you marks: ";
    cin >> marks;
    cout << "\n";

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
        cout << "FAIL";
    }

}