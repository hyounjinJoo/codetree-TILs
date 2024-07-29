#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string StringArr[10];

    for(int Idx = 0; Idx < 10; ++Idx)
    {
        cin >> StringArr[Idx];
    }

    for(int Idx = 10 - 1; Idx >= 0; --Idx)
    {
        cout << StringArr[Idx] << endl;
    }

    return 0;
}