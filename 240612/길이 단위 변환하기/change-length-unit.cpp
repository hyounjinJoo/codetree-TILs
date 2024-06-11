#include <iostream>

#define FT_TO_CM(x) x*30.48f
#define MI_TO_CM(x) x*160934

inline float FtToCm(float num){ return num * 30.48f; }
inline float MiToCm(float num){ return num * 160934.f; }

using namespace std;

int main() {
    float TargetFt = 9.2f;
    float TargetMi = 1.3f;

    cout << fixed;
    cout.precision(1);

    cout << TargetFt << "ft = " << FtToCm(TargetFt) << "cm" << endl;
    cout << TargetMi << "mi = " << MiToCm(TargetMi) << "cm" << endl;

    return 0;
}