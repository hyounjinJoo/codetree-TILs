#include <iostream>
using namespace std;

int main() 
{
    string Input1STR;
    cin >> Input1STR;
    string Input2STR;
    cin >> Input2STR;

    Input2STR[0] = Input1STR[0];
    Input2STR[1] = Input1STR[1];
    
    cout << Input2STR;

    return 0;
}