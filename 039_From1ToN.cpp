#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Till which number do you want to display?" << endl;
    cin >> n;   //Getting the final number to be displayed

    cout << "\nNumbers till " << n << endl;

    //Using for loop to print all the numbers one by one
    for (int i=1; i<=n; i++)
    {
        cout << i << endl;
    }
    return 0;
}