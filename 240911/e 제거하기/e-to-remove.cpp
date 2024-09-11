#include <iostream>
using namespace std;

int main() 
{
    string STR;
    cin >> STR;

    STR.erase(STR.find("e"), 1);

    cout << STR;

    return 0;
}