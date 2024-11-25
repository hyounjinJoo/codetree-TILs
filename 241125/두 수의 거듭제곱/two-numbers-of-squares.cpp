#include <iostream>
using namespace std;

void PrintSquare(const int a, const int b)
{
    int Result = 1;
    for(int Iter = 0; Iter < b; ++Iter)
    {
        Result *= a;
    }

    cout << Result << endl;
}

int main() 
{
    int a, b;
    a = b = 0;

    cin >> a >> b;

    PrintSquare(a, b);

    return 0;
}