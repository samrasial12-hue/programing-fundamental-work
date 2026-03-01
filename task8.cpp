#include <iostream>
using namespace std;

main()
{
    float vegPrice;
    float fruitPrice;
    int vegKg;
    int fruitKg;
    cout << "Enter vegetable price per kg (coins): ";
    float vegprice;
    cin >> vegPrice;
    cout << "Enter fruit price per kg (coins): ";
    float fruitprice;
    cin >> fruitPrice;
    cout << "Enter total kg of vegetables: ";
    float kgveg;
    cin >> vegKg;
    cout << "Enter total kg of fruits: ";
    float kgfruit;
    cin >> fruitKg;
    float totalcoins;
    float totalCoins = (vegPrice * vegKg) + (fruitPrice * fruitKg);
    float totalRupees = totalCoins / 1.94;
    cout << "Total earnings in Rupees = " << totalRupees << endl;
}