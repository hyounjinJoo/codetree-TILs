#include <iostream>
using namespace std;

//  범위 : a이상 b이하 수
//  조건 1 : 3, 6, 9 중에 하나가 들어가 있거나
//  조건 2 : 숫자 자체가 3의 배수인 숫자
//  조건에 해당하는 개수 세기

int IsInClude3_6_9(int Number)
{
    int RemainNumber = 0;
    while(Number != 0)
    {
        RemainNumber = Number % 10;
        if(RemainNumber == 3
        || RemainNumber == 6
        || RemainNumber == 9)
        {
            return true;
        }

        Number /= 10;
    }

    return false;
}

int CountConditionNumber(const int Num1, const int Num2)
{
    int Count = 0;
    for(int Iter = Num1; Iter <= Num2; ++Iter)
    {
        if(IsInClude3_6_9(Iter) || (Iter % 3 == 0))
        {
            ++Count;
        }
    }

    return Count;
}

void PrintNumber(const int Number)
{
    cout << Number << endl;
}

int main() 
{
    int a, b, Count;
    cin >> a >> b;

    Count = CountConditionNumber(a, b);
    PrintNumber(Count);
    
    return 0;
}