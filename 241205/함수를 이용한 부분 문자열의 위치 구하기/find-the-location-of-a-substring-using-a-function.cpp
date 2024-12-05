#include <iostream>
using namespace std;

#define CANT_FIND -1
int IDX = CANT_FIND;
string TargetSTR;
string InputSTR;

void FindAndSaveIDXInInputSTR()
{
    size_t Index = InputSTR.find(TargetSTR);
    if(Index != string::npos)
    {
        IDX = static_cast<int>(Index);
    }
    else
    {
        IDX = CANT_FIND;
    }
}

int main() 
{
    cin >> InputSTR;
    cin >> TargetSTR;

    FindAndSaveIDXInInputSTR();
    cout << IDX << endl;

    return 0;
}