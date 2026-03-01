#include <iostream>
using namespace std;

int main()
{
    int population;
    cout << "Enter the current world population: ";
    cin >> population;
    int birthrate;
    cout << "Enter the monthly birthrate (number of births per month): ";
    cin >> birthrate;
    int futurepopulation;
    futurepopulation = population + birthrate * 360;
    cout << "population in three decades will be: " << futurepopulation;
}