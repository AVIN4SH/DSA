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
        cout << "Invalid Input. Please input a valid Age";
        return 1;
    }
    if (age < 18)
    {
        cout << "You're not Eligible for job";
    }
    else if (age <= 57)
    {
        cout << "You're Eligible for job";
        if (age >= 55)
        {
            cout << ", but Retirement is Soon";
        }
    }
    else
    {
        cout << "Its Retirement Time";
    }
    return 0;
}