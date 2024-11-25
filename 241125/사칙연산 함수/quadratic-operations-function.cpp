#include <iostream>
using namespace std;

void CalcAndPrint(const int InA, const string& InOpreatorSTR, const int InB)
{
    char Operator = InOpreatorSTR[0];

    if(Operator != '+' && Operator != '-' && Operator != '/' && Operator != '*')
    {
        cout << "False";
        return;
    }

    int Result = 0;
    switch(Operator)
    {
        case '+':
            Result = InA + InB;
        break;
        case '-':
            Result = InA - InB;
        break;
        case '/':
            Result = InA / InB;
        break;
        case '*':
            Result = InA * InB;
        break;
    }
    cout << InA << " " << Operator << " " << InB << " = " << Result;
}

int main() 
{
    int a, c;
    string b;

    cin >> a >> b >> c;
    CalcAndPrint(a, b, c);

    return 0;
}