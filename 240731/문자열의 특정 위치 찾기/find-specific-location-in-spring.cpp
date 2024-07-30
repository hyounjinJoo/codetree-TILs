#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string InputStr;
    cin >> InputStr;

    char InputAlphabet;
    cin >> InputAlphabet;

    size_t Pos = InputStr.find(InputAlphabet);
    if(Pos != string::npos)
    {
        cout << Pos;
    }
    else
    {
        cout << "No";
    }

    return 0;
}