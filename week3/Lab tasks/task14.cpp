#include <iostream>
using namespace std;

main()
{
    float voltage; 
    cout << "Enter Voltage (V): ";
    cin >> voltage;
    float current;
    cout << "Enter Current (I): ";
    cin >> current;
    float power;
    power = voltage * current;
    cout << "Power = " << power << " Watts";
}