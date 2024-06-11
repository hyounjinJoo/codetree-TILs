#include <iostream>
#include <string>

int main() {
    int VarA = 1;
    int VarB = 2;
    char VarC = 'C';
    std::string VarD = "->";
    
    std::cout << VarA << VarD;
    std::cout << VarB << VarD;
    std::cout << VarC << std::endl;

    return 0;
}