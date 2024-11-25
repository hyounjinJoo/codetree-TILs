#include <iostream>
using namespace std;

bool IsLeapYear(const int InYear)
{
    if(InYear % 4 != 0)
    {
        return false;
    }
    if(InYear % 100 == 0 && InYear % 400 != 0)
    {
        return false;
    }

    return true;
}

int main() 
{
    int Year = 0;
    cin >> Year;

    if(IsLeapYear(Year))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}