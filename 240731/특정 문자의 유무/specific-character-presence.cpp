#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string InputSrc;
    cin >> InputSrc;

    bool bFirstExist = true;
    if(InputSrc.find("ee") == string::npos)
    {
        bFirstExist = false;
    }

    bool bSecondExist = true;
    if(InputSrc.find("ab") == string::npos)
    {
        bSecondExist = false;
    }

    bFirstExist ? cout << "Yes" : cout << "No";    
    cout << " ";
    bSecondExist ? cout << "Yes" : cout << "No";
    
    return 0;
}