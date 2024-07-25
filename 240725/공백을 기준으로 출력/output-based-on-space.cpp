#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string ResultString;
    string Str1, Str2;
    getline(cin, Str1);
    getline(cin, Str2);

    Str1.erase(remove(Str1.begin(), Str1.end(), ' '), Str1.end());
    Str2.erase(remove(Str2.begin(), Str2.end(), ' '), Str2.end());
    
    ResultString = Str1 + Str2;

    cout << ResultString;
    return 0;
}