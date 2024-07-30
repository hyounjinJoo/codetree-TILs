#include <iostream>
using namespace std;

int main() 
{
    string WholeStr;
    string SubStr;
    cin >> WholeStr;
    cin >> SubStr;
    
    size_t Pos = 0;
    int CountAppear = 0;
    while(Pos != string::npos)
    {
        if(WholeStr.find(SubStr, Pos) != string::npos)
        {
            ++CountAppear;
            Pos = WholeStr.find(SubStr, Pos) + 1;
        }
        else
        {
            Pos = string::npos;
        }
    }

    cout << CountAppear;

    return 0;
}