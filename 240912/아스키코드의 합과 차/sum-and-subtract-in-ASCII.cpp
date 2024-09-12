#include <iostream>
using namespace std;

int main() 
{
    int Result = 0;
    char Num1, Num2;
    cin >> Num1 >> Num2;

    cout << (int)Num1 + (int)Num2 << " ";
    (int)Num1 > (int)Num2 ? cout << (int)Num1 - (int)Num2 : cout << (int)Num2 - (int)Num1;

    return 0;
}