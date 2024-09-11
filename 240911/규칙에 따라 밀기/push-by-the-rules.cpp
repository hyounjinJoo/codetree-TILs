#include <iostream>
using namespace std;

int main() 
{
    string STR;
    cin >> STR;

    string Order;
    cin >> Order;

    for(int Idx = 0; Idx < Order.length(); ++Idx)
    {
        if('L' == Order[Idx])
        {
            STR = STR.substr(1, STR.length() - 1) + STR.substr(0, 1);
        }
        else
        {
            STR = STR.substr(STR.length() - 1, 1) + STR.substr(0, STR.length() - 1);
        }
    }

    cout << STR << endl;

    return 0;
}