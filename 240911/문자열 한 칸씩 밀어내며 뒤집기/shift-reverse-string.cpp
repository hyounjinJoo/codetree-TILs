#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    string STR;
    cin >> STR;
    int QueryCount = 0;
    cin >> QueryCount;

    int Query = 0;

#define SHIFT_LEFT  1
#define SHIFT_RIGHT 2
#define REVERSE     3

    for(int Iter = 0; Iter < QueryCount; ++Iter)
    {
        cin >> Query;
        
        if(SHIFT_LEFT == Query)
        {
            STR = STR.substr(1, STR.length() - 1) + STR.substr(0, 1);
        }
        else if(SHIFT_RIGHT == Query)
        {
            STR = STR.substr(STR.length() - 1, 1) + STR.substr(0, STR.length() - 1);
        }
        else if(REVERSE == Query)
        {
            reverse(STR.begin(), STR.end());
        }

        cout << STR << endl;
    }

    return 0;
}