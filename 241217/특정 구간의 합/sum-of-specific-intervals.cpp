#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    vector<int> Numbers;
    int CountOfElement, CountOfOperation;
    CountOfElement = CountOfOperation = 0;

    cin >> CountOfElement >> CountOfOperation;
    Numbers.resize(CountOfElement);

    for(int IDX = 0; IDX < CountOfElement; ++IDX)
    {
        cin >> Numbers[IDX];
    }

    int StartIDX, EndIDX, Sum;
    StartIDX = EndIDX = 0;
    for(int Iter = 0; Iter < CountOfOperation; ++Iter)
    {
        cin >> StartIDX >> EndIDX;
        --StartIDX;
        
        Sum = 0;
        for(int IDX = StartIDX; IDX < EndIDX; ++IDX)
        {
            Sum += Numbers[IDX];
        }

        cout << Sum << endl;
    }

    return 0;
}