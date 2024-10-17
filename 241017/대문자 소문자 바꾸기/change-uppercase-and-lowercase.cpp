#include <iostream>
using namespace std;

int main() 
{
    string InputSTR;
    cin >> InputSTR;

    for(int IDX = 0; IDX < InputSTR.size(); ++IDX)
    {
        if(InputSTR[IDX] >= 'A' && InputSTR[IDX] <= 'Z')
        {
            InputSTR[IDX] = tolower(InputSTR[IDX]);
        }
        else
        {
            InputSTR[IDX] = toupper(InputSTR[IDX]);
        }
    }

    cout << InputSTR;

    return 0;
}