#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string str = "Welcome_To_CodeWithHarry!";
    ofstream out("example.txt");
    out << str;
    return 0;
}
