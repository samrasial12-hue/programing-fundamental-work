#include <iostream>
using namespace std;

main()
{
    int hours;
    cout << "Enter Hours: ";
    cin >> hours;
    int seconds;
    seconds = hours * 60 * 60;
    cout << hours << " is equivalent to " << seconds << "seconds";
}