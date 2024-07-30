#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string InputSrc;
    cin >> InputSrc;

    bool bFirstExist = false;
    if(InputSrc.find("ee") != string::npos)
    {
        bFirstExist = true;
    }

    bool bSecondExist = false;
    if(InputSrc.find("ab") != string::npos)
    {
        bFirstExist = true;
    }

    bFirstExist ? cout << "Yes" : cout << "No";    
    cout << " ";
    bSecondExist ? cout << "Yes" : cout << "No";
    
    return 0;
}