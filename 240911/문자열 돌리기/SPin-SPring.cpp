#include <iostream>
using namespace std;

int main() 
{
    string STR;
    cin >> STR;

    for(int Iter = 0; Iter <= STR.length(); ++Iter)
    {
        cout << STR << endl;

        STR = STR.substr(STR.length() - 1, 1) + STR.substr(0, STR.length() - 1);
    }

    return 0;
}