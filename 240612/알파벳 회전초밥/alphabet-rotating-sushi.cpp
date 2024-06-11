#include <iostream>
#include <string>

int main() {
    // 문자열 A를 입력받는다.
    std::string StringA;
    std::string WordB;

    std::cin >> StringA;
    std::cin >> WordB;
    
    int WordLength = WordB.length();
    int StringLength = StringA.length();

    int Repeat = 0;
    for(int WordIdx = 0; WordIdx < WordLength;)
    {
        for(int STRIdx = 0; STRIdx < StringLength; ++STRIdx)
        {
            if(StringA[STRIdx] == WordB[WordIdx])
            {
                ++WordIdx;
            }
        }
        ++Repeat;
    }

    std::cout << Repeat;

    return 0;
}