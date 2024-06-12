#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string TempStr;
    int LengthSum = 0;
    cin >> TempStr;
    LengthSum += TempStr.length();
    cin >> TempStr;
    LengthSum += TempStr.length();

    cout << LengthSum;
    
    return 0;
}