#include <iostream>
#include <string>

using namespace std;

int main() 
{
    int n = 0;
    cin >> n;

    string StrArr[n];
    for(int Idx = 0; Idx < n; ++Idx)
    {
        cin >> StrArr[Idx];
    }

    char Alphabet;
    cin >> Alphabet;

    int TotalLength = 0;
    int ConditionTrueCount = 0;
    for(int Idx = 0; Idx < n; ++Idx)
    {
        if(StrArr[Idx][0] == Alphabet)
        {
            ++ConditionTrueCount;
            TotalLength += StrArr[Idx].length();
        }
    }
    cout << fixed;
    cout.precision(2);

    cout << ConditionTrueCount << " " << static_cast<float>(TotalLength) / ConditionTrueCount;

    return 0;
}