#include <iostream>
using namespace std;
int main()
{
    int age = 0;
    cout << "Enter your Age (in years): ";
    cin >> age;

    //* Validating input
    if (cin.fail() || age < 0)
    {
        cout << "Invalid input. Please enter a valid age.\n";
        return 1; // Exit with an error code
    }

    //* if - else statements
    if (age >= 18)
    {
        cout << "You're an adult" << "\n";
    }
    else if (age >= 14) // No need for age < 18 condition, already checked
    {
        cout << "You're a teenager" << "\n";
    }
    else
    {
        cout << "You're a child" << "\n";
    }

    //* ternary operator
    cout << ((age >= 18) ? "You can Vote\n" : "You cannot Vote\n");
    return 0;
}