#include <iostream>
using namespace std;

int main() 
{
    string TempStr;
    getline(cin, TempStr);

    char Alphabet = NULL;
    cin >> Alphabet;

    int Count = 0;
    for(int Pos = 0; Pos < TempStr.length(); ++Pos)
    {
        if(TempStr[Pos] == Alphabet)
        {
            ++Count;
        }
    }

    cout << Count;

    return 0;
}