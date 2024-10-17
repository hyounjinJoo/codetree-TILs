#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string InputSTR1;
    string InputSTR2;

    cin >> InputSTR1;
    cin >> InputSTR2;

    cout << stoi(InputSTR1 + InputSTR2) + stoi(InputSTR2 + InputSTR1);

    return 0;
}