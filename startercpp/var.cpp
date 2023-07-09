/*A variable name in C++ can have a length of range 1 to 255 characters
    A variable name can only contain alphabets,
    digits, and underscores(_).A variable cannot start with a digit.A variable cannot include any white space in its name.Variable names are case sensitive The name should not be a reserved keyword or any special character */

#include <iostream>
using namespace std;

int a = 5; // global variable

void func()
{
    cout << a << endl;
}

int main()
{
    int a = 10; // local variable
    cout << a << endl;
    func();
    return 0;
}
