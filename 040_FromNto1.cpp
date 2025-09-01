#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "From which number do you want to display?" << endl;
    cin >> n;   //Getting the first number to be displayed

    cout << "\nNumbers from " << n << " to 1" << endl;

    //Using for loop to print all the numbers one by one
    for (int i=n; i>=1; i--)
    {
        cout << i << endl;
    }
    return 0;
}