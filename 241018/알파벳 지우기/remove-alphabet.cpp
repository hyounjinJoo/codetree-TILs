#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int Extraction(const string& STR)
{
    int Number;
    string ExtractedSTR;

    for(int IDX = 0; IDX < STR.size(); ++IDX)
    {
        if(0 != isdigit(STR[IDX]))
        {
            ExtractedSTR.append(STR, IDX, 1);
        }
    }

    Number = stoi(ExtractedSTR);

    return Number;
}

int main() 
{
    string InputSTR;
    int Answer = 0;

    for(int Iter = 0; Iter < 2; ++Iter)
    {
        cin >> InputSTR;
        Answer += Extraction(InputSTR);
    }

    cout << Answer;

    return 0;
}