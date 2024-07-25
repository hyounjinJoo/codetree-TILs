#include <iostream>
using namespace std;

int main() {
    string String3To10;
    getline(cin, String3To10);
    for(int Pos = 2; Pos < 10; ++Pos)
    {
        cout << String3To10[Pos];
    }
    
    return 0;
}