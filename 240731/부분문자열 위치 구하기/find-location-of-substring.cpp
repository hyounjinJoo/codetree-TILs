#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string WholeStr;
    string SubStr;

    cin >> WholeStr;
    cin >> SubStr;

    if(WholeStr.find(SubStr) == string::npos)
    {
        cout << -1;
    }
    else
    {
        cout << WholeStr.find(SubStr);
    }
    
    return 0;
}