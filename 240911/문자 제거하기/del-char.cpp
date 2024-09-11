#include <iostream>
using namespace std;

int main() 
{
    string STR;
    cin >> STR;

    int IDX = 0;
    while(STR.length() > 0)
    {
        cin >> IDX;
        if(IDX >= STR.length())
        {
            IDX = STR.length() - 1;
        }

        STR.erase(IDX, 1);

        cout << STR << endl;
    }

    cout << STR << endl;

    return 0;
}