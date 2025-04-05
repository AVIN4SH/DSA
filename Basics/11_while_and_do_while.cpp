#include <bits/stdc++.h>
using namespace std;

int main()
{
    // WHILE LOOP
    int i = 1;
    cout << "While loop (1 to 5):" << endl;
    while (i <= 5)
    {
        cout << i << " ";
        i++;
    }
    cout << endl;

    // DO-WHILE LOOP
    int j = 1;
    cout << "Do-While loop (1 to 5):" << endl;
    do
    {
        cout << j << " ";
        j++;
    } while (j <= 5);
    cout << endl;

    // Key difference demonstration
    int x = 10;
    cout << "While loop won't run if condition is false from start" << endl;
    while (x < 5)
    {
        cout << "This won't print." << endl;
    }

    int y = 10;
    cout << "Do-While loop runs at least once even if condition is false" << endl;
    do
    {
        cout << "This runs once even though y < 5 is false." << endl;
    } while (y < 5);

    return 0;
}
