#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void SlideRight(string& OriginSTR)
{
	char First = OriginSTR[OriginSTR.size() - 1];
	OriginSTR = OriginSTR.substr(0, OriginSTR.size() - 1);
	OriginSTR.insert(OriginSTR.begin(), First);
}

int main() {
    string A, B;

    cin >> A >> B;

    int IterCount = 0;
    int Length = B.length();
    while(A != B)
    {
        SlideRight(A);
        ++IterCount;

        if(IterCount > Length)
        {
            IterCount = -1;
            break;
        }
    }

    cout << IterCount;

    return 0;
}