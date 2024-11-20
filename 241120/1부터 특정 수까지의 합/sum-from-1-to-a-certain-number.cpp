#include <iostream>
using namespace std;

void PrintNumber(const int InN)
{
    cout << InN << endl;
}

int CalcAddAndDivide10(const int InN)
{
    int Value = (1 + InN) * InN / 20;

    PrintNumber(Value);

    return Value;
}

int main() 
{
    int N = 0;
    cin >> N;

    N = CalcAddAndDivide10(N);

    return 0;
}