#include <iostream>
#include <string>

using namespace std;

int main() 
{
    int Number = 0;
    cin >> Number;

    int CountAlphbetA = 0;
    int TotalLength = 0;
    string TempStr;    
    for(int Iter = 0; Iter < Number; ++Iter)
    {
        cin >> TempStr;
        TotalLength += TempStr.length();
        if('a' == TempStr[0])
        {
            ++CountAlphbetA;
        }        
    }    

    cout << TotalLength << " " << CountAlphbetA;
    return 0;
}