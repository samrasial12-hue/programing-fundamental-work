#include <iostream>
using namespace std;

main()
{
    float charge, time, current;
    cout << "Enter Charge (Q): ";
    cin >> charge;
    cout << "Enter Time (t): ";
    cin >> time;
    current = charge / time;
    cout << "Current (I) = " << current;
}