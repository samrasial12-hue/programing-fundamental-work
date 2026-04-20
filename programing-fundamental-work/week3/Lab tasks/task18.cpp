#include <iostream>
using namespace std;

int main()
{
    int pointer2, pointer3, points;
    cout << "Enter 2 pointer: ";
    cin >> pointer2;
    cout << "Enter 3 pointer: ";
    cin >> pointer3;
   points = (pointer2 * 2) + (pointer3 * 3);
    cout << "Total points = " << points;
}