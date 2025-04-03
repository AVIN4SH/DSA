#include <iostream>
#include <string> // Required for string type
using namespace std;

int main() {
    //* Integer types
    int age = 25;               // Regular integer
    short shortNum = 32767;     // Short integer
    long longNum = 2147483647;  // Long integer
    long long bigNum = 9223372036854775807; // Long long integer

    //* Floating-point types
    float pi = 3.14f;           // Float (single precision)
    double gravity = 9.80665;   // Double (higher precision)
    long double preciseNum = 3.141592653589793238L; // Long double (highest precision)

    //* Character type
    char grade = 'A';           // Single character

    //* Boolean type
    bool isStudent = true;      // Boolean (true/false)

    //* String type
    string name = "John Doe";   // String (sequence of characters)

    //* Wide character type (for Unicode support)
    wchar_t wideChar = L'Ω';    // Wide character

    // Displaying values
    cout << "Integer (int): " << age << endl;
    cout << "Short (short): " << shortNum << endl;
    cout << "Long (long): " << longNum << endl;
    cout << "Long long (long long): " << bigNum << endl;
    cout << "Float (float): " << pi << endl;
    cout << "Double (double): " << gravity << endl;
    cout << "Long double (long double): " << preciseNum << endl;
    cout << "Character (char): " << grade << endl;
    cout << "Boolean (bool): " << isStudent << endl;
    cout << "String (string): " << name << endl;
    cout << "Wide Character (wchar_t): " << wideChar << endl;

    return 0;
}
