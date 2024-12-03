#include <iostream>
#include <vector>

using namespace std;

void DivideEvenNumbers(vector<int>& InOutArray)
{
    int ArraySize = InOutArray.size();

    for(int IDX = 0; IDX < ArraySize; ++IDX)
    {
        if(0 == InOutArray[IDX] % 2)
        {
            InOutArray[IDX] /= 2;
        }
    }
}

void PrintArray(const vector<int>& InArray)
{
    int ArraySize = InArray.size();

    for(int IDX = 0; IDX < ArraySize; ++IDX)
    {
        cout << InArray[IDX] << " ";
    }

    cout << endl;
}

int main() 
{
    vector<int> Array;
    int AmountElementCount = 0;
    cin >> AmountElementCount;
    Array.resize(AmountElementCount);

    for(int IDX = 0; IDX < AmountElementCount; ++IDX)
    {
        cin >> Array[IDX];
    }

    DivideEvenNumbers(Array);

    PrintArray(Array);

    // 여기에 코드를 작성해주세요.
    return 0;
}