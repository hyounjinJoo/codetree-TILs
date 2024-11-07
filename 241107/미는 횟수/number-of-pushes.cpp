#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void SlideRight(string& OriginSTR)
{
	char First = OriginSTR[0];
	OriginSTR = OriginSTR.substr(1, OriginSTR.size() - 1);
	OriginSTR.push_back(First);
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