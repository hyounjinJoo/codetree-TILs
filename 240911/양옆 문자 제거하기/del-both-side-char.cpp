#include <iostream>
using namespace std;

int main() 
{
    string STR;
    cin >> STR;

    STR.erase(1,1);
    STR.erase(STR.size() - 2,1);

    cout << STR;

    return 0;
}