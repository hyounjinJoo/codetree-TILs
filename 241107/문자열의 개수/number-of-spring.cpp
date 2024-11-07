#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> VectorSTR;
    string InputSTR;

    cin >> InputSTR;
    while("0" != InputSTR)
    {
        VectorSTR.push_back(InputSTR);
        cin >> InputSTR;
    }

    cout << VectorSTR.size() << endl;
    for(int IDX = 0; IDX < VectorSTR.size(); IDX += 2)
    {
        cout << VectorSTR[IDX] << endl;
    }
    
    return 0;
}