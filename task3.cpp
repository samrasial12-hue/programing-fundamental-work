#include <iostream>
using namespace std;

int main() {
    int Vi, a, time, Vf;
    cout << "Enter Initial Velocity (m/s): ";
    cin >> Vi;
    cout << "Enter Acceleration (m/s^2): ";
    cin >> a;
    cout << "Enter Time (s): ";
    cin >> time;
    Vf = Vi + (a * time);
    cout << "Final Velocity (m/s): " << Vf << endl;
}