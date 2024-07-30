#include <iostream>
using namespace std;

int main() 
{    
    string Input1, Input2;

    cin >> Input1;
    cin >> Input2;

    if((Input1 + Input2) == (Input2 + Input1))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

    return 0;
}