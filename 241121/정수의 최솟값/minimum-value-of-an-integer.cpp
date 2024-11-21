#include <iostream>
#include <algorithm>

using namespace std;

int FindMinNumber(const int Num1, const int Num2, const int Num3)
{
    int MinNumber = min(Num1, Num2);
    MinNumber = min(MinNumber, Num3);

    return MinNumber;
}

int main() 
{
    int Num1, Num2, Num3;
    cin >> Num1 >> Num2 >> Num3;

    int MinNumber = FindMinNumber(Num1, Num2, Num3);

    cout << MinNumber << endl;

    return 0;
}