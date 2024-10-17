#include <iostream>
#include <cctype>

using namespace std;

int main() 
{
    string InputSTR;
    cin >> InputSTR;

    int SumResult = 0;    
    for(int IDX = 0; IDX < InputSTR.size(); ++IDX)
    {
        if(isdigit(InputSTR[IDX]))
        {
            SumResult += (InputSTR[IDX] - '0');
        }
    }

    cout << SumResult << endl;

    return 0;
}