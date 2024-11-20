#include <iostream>
using namespace std;

// Print 10 Stars
void Print10Stars()
{
    for(int Iter = 0; Iter < 10; ++Iter)
    {
        cout << "*";
    }

    cout << endl;
}

int main() 
{
    for(int Iter = 0; Iter < 5; ++Iter)
    {
        Print10Stars();
    }

    return 0;
}