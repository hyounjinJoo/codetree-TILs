#include <iostream>
using namespace std;

void Operation(int& NumA, int& NumB)
{
    if(NumA < NumB)
    {
        NumA += 10;
        NumB *= 2;
    }
    else
    {
        NumA *= 2;
        NumB += 10;
    }
}

int main() 
{
    int NumA, NumB;
    cin >> NumA >> NumB;

    Operation(NumA, NumB);

    cout << NumA << " " << NumB << endl;
    
    return 0;
}