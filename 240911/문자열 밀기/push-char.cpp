#include <iostream>
using namespace std;

int main() 
{
    string STR;
    cin >> STR;

    STR = STR.substr(1, STR.length() - 1) + STR.substr(0, 1);

    cout << STR;
    
    return 0;
}