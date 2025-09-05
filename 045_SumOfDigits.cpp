#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Number whose sum of digits is to be calculated: ";
    cin >> num; //Gets the number from the user

    int sum=0;  //Intialising sum as 0

    while (num>0)   //While loop that continues as long as there are igits left in the number
    {
        int digit=num%10;  //Getting the last digit using mod
        sum+=digit;  //Adding the digit to the sum
        num/=10;   //Removing the last digit by dividing by 10
    }
    cout << "Sum of digits: " << sum;
    return 0;
}