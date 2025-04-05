#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Basic for loop: counting from 1 to 5
    cout << "\nCounting from 1 to 5:" << endl;
    for (int i = 1; i <= 5; i++)
    {
        cout << i << " ";
    }
    cout << endl;

    // Reverse loop: counting down from 5 to 1
    cout << "\nCounting down from 5 to 1:" << endl;
    for (int i = 5; i >= 1; i--)
    {
        cout << i << " ";
    }
    cout << endl;

    // Loop with step size
    cout << "\nEven numbers between 2 and 10:" << endl;
    for (int i = 2; i <= 10; i += 2)
    {
        cout << i << " ";
    }
    cout << endl;

    // Using loop with an array
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "\nArray elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Range-based for loop (C++11+)
    cout << "\nArray elements using range-based loop:" << endl;
    for (int x : arr)
    {
        cout << x << " ";
    }
    cout << endl;

    // Nested loops: printing a 3x3 grid of *
    cout << "\n3x3 Grid:" << endl;
    for (int row = 1; row <= 3; row++)
    {
        for (int col = 1; col <= 3; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
