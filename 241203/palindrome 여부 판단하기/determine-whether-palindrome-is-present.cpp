#include <iostream>
#include <algorithm>

using namespace std;

void IsPalindrome(const string& InSTR)
{
    string ReverseSTR = InSTR;
    reverse(ReverseSTR.begin(), ReverseSTR.end());

    bool bIsPalindrome = false;
    bIsPalindrome = (ReverseSTR == InSTR);

    if(bIsPalindrome)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}

int main() 
{
    string STR;
    cin >> STR;

    IsPalindrome(STR);

    return 0;
}