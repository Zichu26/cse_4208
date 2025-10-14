#include "Weekday.h"
#include <iostream>
using std::cout;
using std::endl;
using enumerations::Weekday;
using enumerations::Pressure;

int main() {
    Weekday day = Weekday::Sunday;
    for (int i = 0; i < 7; ++i) {
        cout << day << " ";
        day++;
    }
    cout << endl;
    
    Pressure pressure = Pressure::lo;
    while (pressure != Pressure::pop) {
        cout << pressure << " ";
        ++pressure;
    }
    cout << pressure << " ";
    cout << endl;
    
    return 0;
}