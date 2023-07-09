# include <iostream>;
using namespace std;
class Employee
{
public:
    int eID;
    string eName;

    void printName();
};

void Employee::printName()
{
    cout << eName << endl;
}