#include <iostream>

using namespace std;

int main()
{
    float a = 0.f;
    cin >> a;

    a += 1.5f;

    cout << fixed;
    cout.precision(2);

    cout << a;

    return 0;
}