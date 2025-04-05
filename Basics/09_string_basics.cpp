#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Declaration and initialization
    string s1 = "Hello";
    string s2 = "World";

    // Concatenation
    string s3 = s1 + " " + s2;
    cout << "Concatenated string: " << s3 << endl;

    // Taking input (single word)
    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Hello, " << name << "!" << endl;

    // Taking input (multiple words)
    cin.ignore(); // To ignore the leftover newline character
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    cout << "You entered: " << sentence << endl;

    // String functions
    cout << "Length of sentence: " << sentence.length() << endl;
    cout << "First character: " << sentence[0] << endl;
    cout << "Last character: " << sentence[sentence.length() - 1] << endl;

    // Modifying a character
    sentence[0] = toupper(sentence[0]);
    cout << "Modified sentence: " << sentence << endl;

    // Size & Length of a String
    cout << "Size of the String: " << sentence.size() << endl;     // used when string being used like a container like in vectors, stl
    cout << "Length of the String: " << sentence.length() << endl; // used for strings and make code more readable
    return 0;
}
