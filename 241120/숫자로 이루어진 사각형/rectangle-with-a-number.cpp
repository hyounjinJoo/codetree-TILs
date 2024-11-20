#include <iostream>
using namespace std;

void PrintSquareUsing1To9(const int InSize)
{
    int Number = 1;

    for(int IterRow = 0; IterRow < InSize; ++IterRow)
    {
        for(int IterColumn = 0; IterColumn < InSize; ++IterColumn)
        {
            cout << Number << " ";
            ++Number;
            
            if(Number > 9) Number = 1;
        }
        cout << endl;
    }
}

int main() 
{
    int Size = 0;
    cin >> Size;

    PrintSquareUsing1To9(Size);

    return 0;
}