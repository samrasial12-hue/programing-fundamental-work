#include <iostream>
using namespace std;

main()
{
    cout << "Enter total square meters you can paint: ";
    int sq;
    cin >> sq;
    cout << "Enter wall width: ";
    int width;
    cin >> width;
    cout << "Enter wall height: ";
    int height;
    cin >> height;
    int area;
    area= width*height;
    int walls;
    walls=sq/area;
    cout << "Number of complete walls = " << walls << endl;
}