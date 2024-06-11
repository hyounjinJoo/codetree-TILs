#include <iostream>

using namespace std;

enum class State
{
    Ice = 0,
    Vapor,
    Water,
};

int main()
{
    int CTEMP = 0;
    cin >> CTEMP;

    State WaterState = State::Ice;    
    if(0 <= CTEMP && CTEMP < 100)
    {
        WaterState = State::Water;
    }
    else if(100 <= CTEMP)
    {
        WaterState = State::Vapor;
    }

    switch(WaterState)
    {
        case State::Ice:
        cout << "ice";
        break;
        
        case State::Vapor:
        cout << "vapor";
        break;

        case State::Water:
        cout << "water";
        break;

        default:
        break;
    }

    return 0;
}