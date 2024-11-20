#include <iostream>
using namespace std;

void PrintNxMRect(const int InN, const int InM)
{
    for(int IterN = 0; IterN < InN; ++IterN)
    {
        for(int IterM = 0; IterM < InM; ++IterM)
        {
            cout << "1";
        }

        cout << endl;
    }
}

int main() 
{
    int n, m;
    n = m = 0;

    cin >> n >> m;

    PrintNxMRect(n, m);

    return 0;
}