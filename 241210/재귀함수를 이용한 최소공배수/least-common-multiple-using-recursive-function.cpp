#include <iostream>
#include <vector>

using namespace std;

int GCD(int Left, int Right)
{
    return Right ? GCD(Right, Left % Right) : Left;
}

int LCM(int Left, int Right)
{
    return (Left * Right) / GCD(Left, Right);
}

int FindLCMInArray(const vector<int>& Array, int CurrentRightIDX, int CurrentLCM)
{
	if(CurrentRightIDX == Array.size())
	{
        return CurrentLCM;
	}

    return FindLCMInArray(Array, CurrentRightIDX + 1, LCM(CurrentLCM, Array[CurrentRightIDX]));
}

int main()
{
    int Count;
    vector<int> Array;
    cin >> Count;
    Array.resize(Count);

    for (int Iter = 0; Iter < Count; ++Iter)
    {
        cin >> Array[Iter];
    }

    int LCM = FindLCMInArray(Array, 0, 1);

    cout << LCM << endl;

    return 0;
}