#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string StrArr[10];
    for(int Idx = 0; Idx < 10; ++Idx)
    {
        cin >> StrArr[Idx];
    }

    char Alphabet;
    cin >> Alphabet;

    for(int Idx = 0; Idx < 10; ++Idx)
    {
        if(*(StrArr[Idx].end() - 1) == Alphabet)
        {
            cout << StrArr[Idx] << endl;
        }
    }
    
    return 0;
}