#include <iostream>
using namespace std;

main()
{
    float mb;
    cout << "Enter the size in  Megabytes: ";
    cin >> mb;
    float bits;
    bits = mb * 1024 * 1024 * 8;
    cout << mb << " MB is equivalent to " << bits <<" bits";
}