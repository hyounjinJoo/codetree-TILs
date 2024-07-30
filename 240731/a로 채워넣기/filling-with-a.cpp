#include <iostream>
using namespace std;

int main() 
{
    string InputStr;
    cin >> InputStr;

    InputStr[1] = 'a';
    InputStr[InputStr.length() - 2] = 'a';

    cout << InputStr;

    return 0;
}