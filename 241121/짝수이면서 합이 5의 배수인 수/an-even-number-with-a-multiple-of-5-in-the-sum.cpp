#include <iostream>
using namespace std;

bool IsEvenAndSumResult5(const int InNum)
{
    bool Result = false;
    int First = InNum / 10;
    int Second = InNum % 10;

    if(((First + Second) % 5 == 0) && (InNum % 2 == 0))
    {
        Result = true;
    }

    return Result;
}

int main() 
{
    int Number;
    cin >> Number;

    if(true == IsEvenAndSumResult5(Number))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    cout << endl;

    return 0;
}