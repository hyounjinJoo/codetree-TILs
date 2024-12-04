#include <iostream>
#include <vector>

using namespace std;

void ChangeToAbsoluteValueInArray(vector<int>& Numbers)
{
    int MaxIDX = static_cast<int>(Numbers.size());
    for(int IDX = 0; IDX < MaxIDX; ++IDX)
    {
        if(0 > Numbers[IDX])
        {
            Numbers[IDX] *= -1;
        }
    }

    for(int IDX = 0; IDX < MaxIDX; ++IDX)
    {
        cout << Numbers[IDX] << " ";
    }

    cout << endl;
}

int main() 
{
    int AmountOfElement;
    cin >> AmountOfElement;

    vector<int> Numbers;
    Numbers.resize(AmountOfElement);

    for(int IDX = 0; IDX < AmountOfElement; ++IDX)
    {
        cin >> Numbers[IDX];
    }

    ChangeToAbsoluteValueInArray(Numbers);

    return 0;
}