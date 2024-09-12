#include <iostream>
using namespace std;

int main() 
{
#define MAX_ITER 5

    int InputNum;
    for(int Iter = 0; Iter < MAX_ITER; ++Iter)
    {
        cin >> InputNum;
        if(33 <= InputNum && 126 >= InputNum)
        {
            cout << (char)InputNum << " ";
        }
    }

    return 0;
}