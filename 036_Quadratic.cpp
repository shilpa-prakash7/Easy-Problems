#include <iostream>
#include <cmath>   //cmath for sqrt function

using namespace std;

int main()
{
    double a, b, c;

    //Geting three coefficients from the user
    cout << "Enter coefficient a: "; cin >> a;
    cout << "b: "; cin >> b;
    cout << "c: "; cin >> c;

    double D = b*b-4*a*c;   //Calculating the Discriminant

    //If discriminant<0, calculates the two real roots
    if (D>0)
    {
        double root1 = (-b+sqrt(D)/(2*a));
        double root2 = (-b-sqrt(D)/(2*a));

        cout << "Two real roots: " << root1 << " and " << root2;
    }
    //If discriminant=0, calculates the one real root
    else if (D==0)
    {
        double root = -b/(2*a);

        cout << "One real root: " << root;
    }
    //Else, calculates the complex roots
    else
    {
        double realPart = -b/(2*a);
        double imagPart = sqrt(-D)/(2*a);

        cout << "Complex roots: " << realPart << " ± " << imagPart << "i";
    }
    return 0;
}