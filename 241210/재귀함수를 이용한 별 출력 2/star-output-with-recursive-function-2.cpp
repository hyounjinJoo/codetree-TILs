#include <iostream>
using namespace std;

void Recursive(int N, int TwiceN)
{
    if(0 == N)
    {
        return;
    }

    if(N > (TwiceN / 2))
    {
        for(int Iter = N; Iter > TwiceN / 2; --Iter)
        {
            cout << "* ";
        }
        cout << endl;
    }
    else
    {
        for(int Iter = N; Iter <= TwiceN / 2; ++Iter)
        {
            cout << "* ";
        }
        cout << endl;
    }

    Recursive(N - 1, TwiceN);
}

void RecursiveStart(int N)
{
    Recursive(N * 2, N * 2);
}

int main() 
{
    int n = 0;
    cin >> n;

    RecursiveStart(n);

    return 0;
}