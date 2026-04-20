#include <iostream>
using namespace std;

main()
{
    cout << "Enter movie name: ";
    string movie;
    cin >> movie;

    cout << "Enter price of adult ticket: ";
    float adultPrice;
    cin >> adultPrice;

    cout << "Enter price of child ticket: ";
    float childPrice;
    cin >> childPrice;

    cout << "Enter number of adult tickets sold: ";
    float adultSold;
    cin >> adultSold;

    cout << "Enter number of child tickets sold: ";
    float childSold;
    cin >> childSold;

    cout << "Enter percentage to donate to charity: ";
    float charityPercent;
    cin >> charityPercent;

    float totalMoney = (adultPrice * adultSold) + (childPrice * childSold);
    float charityAmount = totalMoney * charityPercent / 100;
    float remainingMoney = totalMoney - charityAmount;

    cout << "Total money earned = " << totalMoney << endl;
    cout << "Money given to charity = " << charityAmount << endl;
    cout << "Remaining money = " << remainingMoney << endl;
}