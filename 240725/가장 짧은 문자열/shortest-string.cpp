#include <iostream>

using namespace std;
int main() {
    size_t LeastLength = 0, BiggestLength = 0;
    string TempString;

    cin >> TempString;
    LeastLength = BiggestLength = TempString.length();
    cin >> TempString;
    if(LeastLength > TempString.length())
    {
        LeastLength = TempString.length();
    }
    if(BiggestLength < TempString.length())
    {
        BiggestLength = TempString.length();
    }
    cin >> TempString;
    if(LeastLength > TempString.length())
    {
        LeastLength = TempString.length();
    }
    if(BiggestLength < TempString.length())
    {
        BiggestLength = TempString.length();
    }

    cout << BiggestLength - LeastLength;

    
    return 0;
}