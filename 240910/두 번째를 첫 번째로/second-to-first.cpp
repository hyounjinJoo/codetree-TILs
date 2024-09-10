#include <iostream>
using namespace std;

int main() 
{
    string STR;
    cin >> STR;

    char Target = STR[1];
    char Replace = STR[0];
    for(int IDX = 0; IDX < STR.size(); ++IDX)
    {
        if(Target == STR[IDX])
        {
            STR[IDX] = Replace;
        }
    }

    cout << STR;
    
    return 0;
}