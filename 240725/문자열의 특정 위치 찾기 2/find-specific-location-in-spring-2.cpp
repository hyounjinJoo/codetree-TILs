#include <iostream>
using namespace std;

int main() {
    string Strs[5] = {"apple", "banana", "grape", "blueberry", "orange"};

    char Alphabet = NULL;
    cin >> Alphabet;

    int Count = 0;
    for(int Idx = 0; Idx < 5; ++Idx)
    {
        if(Strs[Idx][2] == Alphabet || Strs[Idx][3] == Alphabet)
        {
            cout << Strs[Idx] << endl;
            ++Count;
        }  
    }

    cout << Count;

    return 0;
}