#include <iostream>
#include <regex>
using namespace std;
int main()
{
    regex pattern("[a-zA-Z ]+");
    char a[] = "abcd@qwe.co";
    // Input string to be validated
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    // Use std::regex_match to check if the input matches the pattern
    if (regex_match(input, pattern))
    {
        cout << "Valid string: " << input << endl;
    }
    else
    {
        cout << "Invalid string. It should contain only letters and spaces." << endl;
    }
    return 0;
}