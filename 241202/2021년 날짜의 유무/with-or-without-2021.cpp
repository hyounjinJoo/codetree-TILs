#include <iostream>
using namespace std;

int GetMaxDay(const int InMonth)
{
    int Day = 31;
    switch(InMonth)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            Day = 30;
            break;
        case 2:
        default:
            Day = 28;
        break;
    }

    return Day;
}

bool Judge(const int InMonth, const int InDay)
{
    if(InMonth > 12)
    {
        return false;
    }

    int MaxDay = GetMaxDay(InMonth);
    if(InDay > MaxDay)
    {
        return false;
    }

    return true;
}

int main() 
{
    int Month, Day;
    cin >> Month >> Day;

    bool Result = Judge(Month, Day);

    if(Result)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}