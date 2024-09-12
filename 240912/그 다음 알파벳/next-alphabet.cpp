#include <iostream>
using namespace std;

int main() 
{
    char Input;
    cin >> Input;
    
    Input += 1;
    if('z' < Input)
    {
        Input = 'a';
    }

    cout << Input;

    return 0;
}