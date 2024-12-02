#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int CountA, CountB;
    vector<int> N1, N2;
    N1.resize(CountA);
    N2.resize(CountB);

    for(int Iter = 0; Iter < CountA; ++Iter)
    {
        cin >> N1[Iter];
    }

    for(int Iter = 0; Iter < CountB; ++Iter)
    {
        cin >> N2[Iter];
    }

    bool Result = true;
    for(int FirstIDX = 0; FirstIDX < CountA; ++FirstIDX)
    {
        bool Result = true;
        for(int SecondIDX = 0; SecondIDX < CountB; ++SecondIDX)
        {
            int N1Idx = FirstIDX + SecondIDX;
            if(N1[N1Idx] != N2[SecondIDX])
            {
                Result = false;
                break;
            }
        }
        if(Result == true)
        {
            break;
        }
    }

    if(Result == true)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}