#include <iostream>
using namespace std;

void FindGCD(const int InN, const int InM)
{
    int GCD = 0;
    int BigNumber = InN > InM ? InN : InM;
    for(int Iter = 1; Iter <= BigNumber; ++Iter)
    {
        if(InN % Iter == 0 && InM % Iter == 0)
        {
            GCD = Iter;
        }
    }

    cout << GCD;
}

int main() 
{
    int N, M;
    N = M = 0;

    cin >> N >> M;

    FindGCD(N, M);

    return 0;
}