#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int n = -1;
    string A;

    cin >> n >> A;

    string TestSTR;
    int Count = 0;

    for(int iter = 0; iter < n; ++iter)
    {
        cin >> TestSTR;

        if(TestSTR == A)
        {
            ++Count;
        }
    }

    cout << Count << endl;

    return 0;
}