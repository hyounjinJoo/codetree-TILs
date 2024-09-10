#include <iostream>
using namespace std;

int main() 
{
    string STR;
    cin >> STR;
    int Count;
    cin >> Count;

    int Query = 0;
    for(int Iter = 0; Iter < Count; ++Iter)
    {
        cin >> Query;
        //1 a b
        //a번째 문자와 b번째 문자를 교환한 뒤 출력합니다.
        if(1 == Query)
        {
            int IDX1 = 0;
            cin >> IDX1; IDX1--;
            int IDX2 = 0;
            cin >> IDX2; IDX2--;
            char Temp = STR[IDX1];
            STR[IDX1] = STR[IDX2];
            STR[IDX2] = Temp;

            cout << STR << endl;            
        }
        //2 a b
        //문자 a를 전부 문자 b로 변경한 뒤 출력합니다.
        else
        {
            char Target = 0;
            cin >> Target;
            char Replace = 0;
            cin >> Replace;

            for(int IDX = 0; IDX < STR.size(); ++IDX)
            {
                if(Target == STR[IDX])
                {
                    STR[IDX] = Replace;
                }
            }

            cout << STR << endl;
        }
    }

    


    return 0;
}