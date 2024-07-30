#include <iostream>
#include <string>

using namespace std;

int main() 
{
    int Count_ee = 0;
    int Count_eb = 0;

    string InputStr;
    cin >> InputStr;

    size_t FindPos1 = 0;
    size_t FindPos2 = 0;
    while(FindPos1 != string::npos)
    {
        if(InputStr.find("ee", FindPos1) != string::npos)
        {
            FindPos1 = InputStr.find("ee", FindPos1) + 1;
            ++Count_ee;
        }
        else
        {
            FindPos1 = string::npos;
        }
    }

    while(FindPos2 != string::npos)
    {        
        if(InputStr.find("ee", FindPos2) != string::npos)
        {
            FindPos2 = InputStr.find("ee", FindPos2) + 1;
            ++Count_eb;
        }        
        else
        {
            FindPos2 = string::npos;
        }
    }

    cout << Count_ee << " " << Count_eb;

    return 0;
}