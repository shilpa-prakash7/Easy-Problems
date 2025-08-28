#include <iostream>

using namespace std;

int main()
{
    int nums[3];    //Declaring an integer array to store the numbers

    cout << "Enter three integers:" << endl;
    for (int i=0; i<3; i++)   //Using for loop to enter three numbers into the array
    {
        cin >> nums[i];
    }

    int largest = nums[0]; //Assuming first element is the largest

    for (int i=1; i<3; i++)   //Using for loop to go through each element of the array
    {
        if (nums[i]>largest)   //Checks if the element is greater than the current largest
        {
            largest = nums[i];  //If yes then updates the largest
        }
    }

    cout << "\nThe largest number is " << largest;   //Prints the largest element

    return 0;
}