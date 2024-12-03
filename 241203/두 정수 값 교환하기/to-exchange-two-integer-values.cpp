#include <iostream>
using namespace std;

void SwapUsingCallByValue(int InLeft, int InRight)
{
    int Temp = InLeft;
    InLeft = InRight;
    InRight = Temp;

    //cout << InLeft << " " << InRight << endl;
}

void SwapUsingCallByReference(int& InOutLeft, int& InOutRight)
{
    int Temp = InOutLeft;
    InOutLeft = InOutRight;
    InOutRight = Temp;

    //cout << InOutLeft << " " << InOutRight << endl;
}

int main() 
{
    //int N = 10, M = 20;
    int Number1, Number2;
    Number1 = Number2 = 0;
    cin >> Number1 >> Number2;

    SwapUsingCallByReference(Number1, Number2);

    cout << Number1 << " " << Number2;

    return 0;
}