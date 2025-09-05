#include <iostream>

using namespace std;

int main()
{
    int n;  
    int a=0, b=1;   //Storing the first and second values

    cout << "Enter the number of terms: ";
    cin >> n;    //Gets the number of terms from the user

    for (int i=0; i<=n; i++)   //Iterating through all the numbers
    {
        cout << a << endl;  //Prints the number a 
        int next=a+b;   //Variable next, i.e, the sum of consecutive numbers a & b
        a=b;    //Then value of a is set as value of b 
        b=next; //and b is set as next, i.e, the sum of a & b    
    }
    return 0;
}