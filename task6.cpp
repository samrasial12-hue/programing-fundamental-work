#include <iostream>
using namespace std;

main()
{
    cout << "Enter weight of fertilizer bag (in pounds): ";
    float bag;
    cin >> bag;
    cout << "Enter cost of the bag: ";
    float cost;
    cin >> cost;
    cout << "Enter area the bag can cover (in square feet): ";
    float area;
    cin >> area;
    float priceperpound;
    priceperpound = cost/ bag;
    float costPerSquareFoot = cost / area;
    cout << "cost of fertilizer per second = " << priceperpound << endl;
    cout << "Cost of fertilizer per square foot = " << costPerSquareFoot << endl;
}