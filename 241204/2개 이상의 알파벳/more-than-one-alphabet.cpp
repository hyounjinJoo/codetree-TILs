#include <iostream>
using namespace std;

void IsExistOverTwoDifferentLetterInSTR(const string& InSTR)
{
    // 첫번째 char 세팅
    // bool 변수 하나 설정 (false)
    // 반복문
    char FirstLetter = InSTR[0];
    char SecondLetter = InSTR[0];
    for(int IDX = 1; IDX < InSTR.length(); ++IDX)
    {
        if(SecondLetter != InSTR[IDX])
        {
            SecondLetter = InSTR[IDX];
            break;
        }
    }

    if(FirstLetter != SecondLetter)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    cout << endl;
}

int main() 
{
    string LowerCaseSTR;
    cin >> LowerCaseSTR;

    IsExistOverTwoDifferentLetterInSTR(LowerCaseSTR);
    return 0;
}