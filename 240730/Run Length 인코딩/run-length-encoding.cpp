#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string SourceStr;
    cin >> SourceStr;

    string DestStr;

    int LengthCurrentAlphabet = 0;
    char CurrentAlphabet = 0;
    // abccdabba    // 9
    // 
    for(int Idx = 0; Idx < SourceStr.length(); ++Idx)
    {
        if(CurrentAlphabet != SourceStr[Idx])
        {
            if(0 == LengthCurrentAlphabet)
            {
                ++LengthCurrentAlphabet;
            }
            else
            {
                string Temp;
                Temp = CurrentAlphabet + to_string(LengthCurrentAlphabet);
                DestStr.append(Temp);
                LengthCurrentAlphabet = 1;
            }
            
            CurrentAlphabet = SourceStr[Idx];
        }
        else
        {
            ++LengthCurrentAlphabet;
        }

        
        if(Idx == SourceStr.length() - 1)
        {
            string Temp;
            Temp = CurrentAlphabet + to_string(LengthCurrentAlphabet);
            DestStr.append(Temp);  
        }
    }

    cout << DestStr.length() << endl;
    cout << DestStr;

    return 0;
}