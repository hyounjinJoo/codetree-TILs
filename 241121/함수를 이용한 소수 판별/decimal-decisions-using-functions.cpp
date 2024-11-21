#include <iostream>
using namespace std;

bool IsPrime(int n)
{
    if(n == 1)
    {
        return false;
    }

    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main() 
{
    int a, b;
    cin >> a >> b;

    int Sum = 0;
    for(int Number = a; Number <= b; ++Number)
    {
        if(IsPrime(Number))
        {
            Sum += Number;
        }
    }

    cout << Sum << endl;

    return 0;
}