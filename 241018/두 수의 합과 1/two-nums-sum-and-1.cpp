#include <iostream>
#include <string>

using namespace std;

int main() 
{
    int InputINT1, InputINT2;
    cin >> InputINT1;
    cin >> InputINT2;

    string IntToSTRResult = to_string(InputINT1 + InputINT2);

    int Answer = 0;
    for(int IDX = 0; IDX < IntToSTRResult.size(); ++IDX)
    {
        if('1' == IntToSTRResult[IDX])
        {
            ++Answer;
        }
    }

    cout << Answer;

    return 0;
}