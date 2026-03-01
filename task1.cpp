#include <iostream>
using namespace std;

main() {
    int side;
    int sum;
    cout << "Enter number of sides of the polygon: ";
    cin >> side;
    sum = (side - 2) * 180;
    cout << "The total sum of internal angles of a "
         << side  << "-sided polygon is:" 
         << sum << " degrees";
}