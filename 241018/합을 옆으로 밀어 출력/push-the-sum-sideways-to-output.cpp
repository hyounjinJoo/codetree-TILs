#include <iostream>
using namespace std;

int main() 
{
    int InputCount = 0;
    cin >> InputCount;

    int SumResult = 0;
    int InputNumber = 0;
    for(int IDX = 0; IDX < InputCount; ++IDX)
    {
        cin >> InputNumber;
        SumResult += InputNumber;
    }

    string ConvertedSTR;
    ConvertedSTR = to_string(SumResult);

    for(int IDX = 1; IDX < ConvertedSTR.size(); ++IDX)
    {
        cout << ConvertedSTR[IDX];
    }
    cout << ConvertedSTR[0] << endl;

    return 0;
}