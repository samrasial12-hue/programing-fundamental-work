#include <iostream>
#include <cmath>
using namespace std;

main()
{
    int imposter;
    int chance;
    cout << "Enter imposter count: ";
    cin >> imposter;
    int player;
    cout << "Enter player count: ";
    cin >> player;
    chance = 100.0 * imposter / player;   
    cout << "Chance of being an imposter: " << chance << "%" << endl;
}