#include <iostream>

int main() {
    int Weight = 13;
    float GravityRatio = 0.165f;

    std::cout.precision(6);
    std::cout << std::fixed;
    
    std::cout << Weight << " * " << GravityRatio << " = " << Weight * GravityRatio << std::endl;
    
    return 0;
}