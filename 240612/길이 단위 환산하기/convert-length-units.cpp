#include <iostream>

using namespace std;

inline float FtToCm(float& Ft) { return Ft * 30.48f; }

int main()
{
    float n = 0;
    cin >> n;

    n = FtToCm(n);

    cout << fixed;
    cout.precision(1);
    cout << n << endl;

    return 0;
}