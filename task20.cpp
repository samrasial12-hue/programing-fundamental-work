#include <iostream>
using namespace std;

main()
{
    int imposter;
    int player;
    float chances;
    cout << "Enter the imposter value: ";
    cin >> imposter;
    cout << "Enter the player value: ";
    cin >> player;
    chances = 100. * imposter / player;
    cout << "Chances of being an imposter: " << chances << "%";
}