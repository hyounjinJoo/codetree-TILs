#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string TempStr;
    for(int Idx = 0; Idx < 10; ++Idx)
    {
        cin >> TempStr;

        if(Idx % 2 == 0)
        {
            cout << TempStr << endl; 
        }
    }

    return 0;
}