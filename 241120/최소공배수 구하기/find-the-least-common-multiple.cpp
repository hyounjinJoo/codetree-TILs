#include <iostream>
using namespace std;

int FindGCD(const int InN, const int InM)
{
    int GCD = 0;
    int MinNumber = InN > InM ? InM : InN;

    for(int Iter = 1; Iter <= MinNumber; ++Iter)
    {
        if(InN % Iter == 0 && InM % Iter == 0)
        {
            GCD = Iter;
        }
    }

    return GCD;
}

int FindLCM(const int InGCD, const int InN, const int InM)
{
    int LCM = (InN / InGCD) * (InM / InGCD) * InGCD;

    return LCM;
}

int main() 
{
    int N, M;
    N = M = 0;

    // 0. Input Numbers
    cin >> N >> M;

    // 1. FindGCD
    int GCD = FindGCD(N, M);

    // 2. FindLCM
    int LCM = FindLCM(GCD, N, M);

    cout << LCM << endl;

    return 0;
}