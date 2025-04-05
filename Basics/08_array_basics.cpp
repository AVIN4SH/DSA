#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Declare and initialize an array
    int numbers[5] = {10, 20, 30, 40, 50};

    // Access and print individual elements
    cout << "First element: " << numbers[0] << endl;
    cout << "Third element: " << numbers[2] << endl;

    // Modify an element
    numbers[1] = 25;

    // Iterate through the array using a loop
    cout << "All elements in the array:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Element at index " << i << ": " << numbers[i] << endl;
    }

    // Calculate the sum of array elements
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += numbers[i];
    }
    cout << "Sum of elements: " << sum << endl;

    return 0;
}
