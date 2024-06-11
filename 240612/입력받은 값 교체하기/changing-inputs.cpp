#include <iostream>

using namespace std;

void Change(int& Left, int& Right)
{
    int Temp = Left;
    Left = Right;
    Right = Temp;
}

int main()
{
    int a = 0, b = 0;
    cin >> a >> b;

    Change(a, b);

    cout << a << " " << b;

    return 0;
}