#include <iostream>
using namespace std;

bool IsLeapYear(const int InYear)
{
    if(InYear % 4 == 0)
    {
        if(InYear % 100 == 0)
        {
            if(InYear % 400 == 0)
            {
                return true;
            }
            return false;
        }
        return true;
    }

    return false;
}

int GetMaxDay(const int InYear, const int InMonth)
{
    bool bLeapYear = IsLeapYear(InYear);

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
        case 2:
        default:
            if(bLeapYear)
            {
                Day = 29;
            }        
            else
            {
                Day = 28;
            }
        break;
    }

    return Day;
}

bool IsDayExist(const int Year, const int Month, const int Day)
{
    int MaxDay = GetMaxDay(Year, Month);
    if(Day > MaxDay)
    {
        return false;
    }

    return true;
}

#define NotExist -1
void PrintSeason(const int Year, const int Month, const int Day)
{
    bool bDayValid = IsDayExist(Year, Month, Day);
    if(false == bDayValid)
    {
        cout << NotExist << endl;
    }
    else
    {
        switch(Month)
        {
            case 3:
            case 4:
            case 5:
                cout << "Spring" << endl;
                break;
            case 6:
            case 7:
            case 8:            
                cout << "Summer" << endl;
                break;
            case 9:
            case 10:
            case 11:            
                cout << "Fall" << endl;
                break;                
            case 12:
            case 1:
            case 2:            
                cout << "Winter" << endl;
                break;
        }
    }
}

int main() 
{
    int Year, Month, Day;
    cin >> Year >> Month >> Day;

    PrintSeason(Year, Month, Day);

    return 0;
}