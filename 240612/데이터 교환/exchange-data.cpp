#include <iostream>

using namespace std;

void Change(int& First, int& Second, int& Third)
{
    int Temp = Second;
    Second = First;     // Temp : B-2nd, F : F, S : F, T : T
    int Temp2 = Third;  // Same, Temp2 : Third
    Third = Temp;       // F : F, S : F, T : S
    First = Temp2;      // F : T, S : F, T : S
}

int main() 
{
    int a = 5, b = 6, c = 7;
    Change(a, b, c);

    cout << a << endl << b << endl << c;

    return 0;
}