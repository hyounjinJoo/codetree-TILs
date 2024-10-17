#include <iostream>
#include <cctype>
using namespace std;

int main() 
{
    string InputSTR;
    cin >> InputSTR;

    for(int IDX = 0; IDX < InputSTR.size(); ++IDX)
    {
        if(isalpha(InputSTR[IDX]))
        {
            cout << (char)toupper(InputSTR[IDX]);
        }
    }

    return 0;
}