#include <iostream>;
using namespace std;
class Employee
{

public:
    static int count; // returns number of employees
    string eName;

    void setName(string name)
    {
        eName = name;
        count++;
    }
};

int Employee::count = 0; // defining the value of count
