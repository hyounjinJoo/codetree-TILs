#include <iostream>
using namespace std;

int main() 
{
    string Temp;
    cin >> Temp;
    int LoopLimit = 0;
    cin >> LoopLimit;

    auto StartPos = Temp.end() - 1;
    int Length = Temp.size();
    if(LoopLimit > Length)
    {
        LoopLimit = Length;
    }
    
    for(int Idx = 0; Idx < LoopLimit; ++Idx)
    {
        cout << *(StartPos - Idx);
    }
    
    return 0;
}