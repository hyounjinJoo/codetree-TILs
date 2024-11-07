#include <iostream>
using namespace std;

void PrintReverse(const string& InputSTR)
{
    int Length = InputSTR.length();

    for(int IDX = Length - 1; IDX >= 0; --IDX)
    {
        cout << InputSTR[IDX];
    }

    cout << endl;
}

int main() {
    string InputSTR;


    cin >> InputSTR;
    while(InputSTR != "END")
    {
        PrintReverse(InputSTR);
        cin >> InputSTR;
    }

    return 0;
}