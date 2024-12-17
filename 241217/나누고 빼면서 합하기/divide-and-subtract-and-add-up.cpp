#include <iostream>
#include <vector>

using namespace std;

vector<int> Numbers;
int TargetIDX = 0;
int Sum = 0;
    
void DivideAndSum()
{
    while(true)
    {
        Sum += Numbers[TargetIDX - 1];
        if(TargetIDX % 2 == 0)
        {
            TargetIDX /= 2;
        }
        else
        {
            --TargetIDX;
        }

        if(1 == TargetIDX)
        {
            Sum += Numbers[TargetIDX - 1];
            break;
        }
    }
}

int main() 
{
    int Count;
    cin >> Count;
    Numbers.resize(Count);

    cin >> TargetIDX;

    for(int IDX = 0; IDX < Count; ++IDX)
    {
        cin >> Numbers[IDX];
    }

    // m이 1이 되기 전까지 수행
    DivideAndSum();
    cout << Sum;

    return 0;
}