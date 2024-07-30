#include <iostream>
using namespace std;

int main() 
{    
    string Input1, Input2;

    bool Result = false;
    if((Input1 + Input2) == (Input2 + Input1))
    {
        Result = true;
    }

    Result ? cout << "true" : cout << "false";
    
    return 0;
}