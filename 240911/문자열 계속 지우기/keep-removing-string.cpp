#include <iostream>
using namespace std;

int main() 
{
    string STR, Part;
    cin >> STR;
    cin >> Part;

    int LimitIDX = STR.length() - Part.length();
    do {
        bool bFind = false;
        for(int IDX = 0; IDX <= LimitIDX; ++IDX)
        {
            if(STR.substr(IDX, Part.length()) == Part)
            {
                bFind = true;
                STR.erase(IDX, Part.length());
                LimitIDX = STR.length() - Part.length();
                break;
            }
        }

        if(false == bFind)
        {
            break;
        }

    } while(true);

    cout << STR;

    return 0;
}