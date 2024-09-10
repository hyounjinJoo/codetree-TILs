#include <iostream>
using namespace std;

int main() 
{
    string InputSTR;
    cin >> InputSTR;

    //codctrcc
    //ocdotroo
    const char Alphabet1 = InputSTR[0];
    const char Alphabet2 = InputSTR[1];

    for(int IDX = 0; IDX < InputSTR.size(); ++IDX)
    {
        if(Alphabet1 == InputSTR[IDX])
        {
            InputSTR[IDX] = Alphabet2;
        }
        else if(Alphabet2 == InputSTR[IDX])
        {
            InputSTR[IDX] = Alphabet1;
        }
    }

    cout << InputSTR;
    
    return 0;
}