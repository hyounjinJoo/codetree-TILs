#include <iostream>
using namespace std;

void PrintOddStringNtimes(const int InN)
{
    for(int Iter = 0; Iter < InN; ++Iter)
    {
        cout << "12345^&*()_" << endl;
    }
}

int main() 
{
    int InN = 0;
    cin >> InN;

    PrintOddStringNtimes(InN);

    return 0;
}