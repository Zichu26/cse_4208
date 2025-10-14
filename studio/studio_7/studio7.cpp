#include "Weekday.h"
#include "Pressure.h"
#include <iostream>
using namespace std;

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