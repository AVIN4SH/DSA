/*
    Problem Statement:
    Take age from user & then decide accordingly based on following information:
    1.if age < 18:
        - print: you're not eligible for job
    2.if age >= 18:
        - print: you're eligible for job
    3.if age >= 55 and age <= 57:
        - print: you're eligible for job but retirement soon
    4.if age > 57:
        - print: retirement time
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int age = 0;
    cout << "Enter your Age (in years): ";
    cin >> age;
    if (age < 0)
    { // Validating Input
        cout << "Invalid Input. Please input a valid Age\n";
        return 1;
    }
    if (age < 18)
    {
        cout << "You're not Eligible for job\n";
    }
    else if (age < 55)
    {
        cout << "You're Eligible for job\n";
    }
    else if (age <= 57) // No need to check `age >= 55`, since it's already covered
    {
        cout << "You're Eligible for job but Retirement is Soon\n";
    }
    else
    {
        cout << "Its Retirement Time\n";
    }
    return 0;
}