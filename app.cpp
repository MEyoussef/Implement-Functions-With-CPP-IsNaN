#include <iostream>
using namespace std;

/*

isNaN => Is Not a Number
"1234Z6" => Is Not a Number => True
"123456" => Is a Number => False

*/

/**
 * Checks whether a given string is a valid number or not.
 *
 * A valid number is a string that only contains digits.
 * If the string contains any character that is not a digit (from '0' to '9'),
 * the function returns true, meaning the string is not a valid number.
 * Otherwise, the function returns false, meaning the string is a valid number.
 *
 * @param target The string to check.
 * @return True if the string is not a valid number, false otherwise.
 */
bool IsNaN(string target)
{
    // Iterate over each character in the string
    for(char &i : target)
    {
        // If the character is not a digit (from '0' to '9')
        if(i < '0' || i > '9')
        {
            // Return true, meaning the string is not a valid number
            return true;
        }
    }
    // If we've iterated over all characters and haven't found any non-digits,
    // return false, meaning the string is a valid number
    return false;
}

int main()
{
    cout << IsNaN("1234Z6") << endl; // False
    cout << "\n============\n";
    cout << IsNaN("123456") << endl; // True
    return 0;
}