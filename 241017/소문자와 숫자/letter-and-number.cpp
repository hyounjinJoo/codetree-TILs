#include <iostream>
#include <cctype>

using namespace std;
#define IS_NOT_DIGIT 0
int main() 
{
    string InputSTR;
    cin >> InputSTR;

    for(int IDX = 0; IDX < InputSTR.size(); ++IDX)
    {
        if(isalpha(InputSTR[IDX]))
        {
            InputSTR[IDX] = tolower(InputSTR[IDX]);
        }
        else if(IS_NOT_DIGIT == isdigit(InputSTR[IDX]))
        {
            continue;
        }

        cout << (char)(InputSTR[IDX]);
    }

    return 0;
}