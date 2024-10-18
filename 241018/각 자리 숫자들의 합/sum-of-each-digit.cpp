#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() 
{
    int InputINT;
    cin >> InputINT;
    string InputSTR = to_string(InputINT);

    int Answer = 0;

    for(int IDX = 0; IDX < InputSTR.size(); ++IDX)
    {
        if(0 != isdigit(InputSTR[IDX]))
        {
            Answer += InputSTR[IDX] - '0';
        }
    }

    cout << Answer;

    return 0;
}