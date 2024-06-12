#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string Left;
    cin >> Left;

    string Right;
    cin >> Right;

    {
        int LeftLength = Left.length();
        int RightLength = Right.length();

        string Result = Left;

        if(LeftLength < RightLength) Result = Right;
        else if(LeftLength == RightLength) Result = "same";

        cout << Result;
        if("same" != Result)
        {
            cout << " " << Result.length();
        }
    }

    return 0;
}