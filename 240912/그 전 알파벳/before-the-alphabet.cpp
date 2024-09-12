#include <iostream>
using namespace std;

int main() 
{
    char Input;
    cin >> Input;

    Input -= 1;

    if('a' >= Input)
    {
        Input = 'z';
    }

    cout << Input;

    return 0;
}