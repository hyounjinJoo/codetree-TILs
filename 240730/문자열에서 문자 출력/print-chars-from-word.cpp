#include <iostream>
using namespace std;

int main() 
{
    string Temp;
    cin >> Temp;
    size_t Size = Temp.length();

    for(size_t Idx = 0; Idx < Size; ++Idx)
    {
        cout << Temp[Idx] << endl;
    }

    return 0;
}