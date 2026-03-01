#include <iostream>
using namespace std;

main() 
{
    int minutes;
    int frame;
    int total;
    cout << "Number of minutes : ";
    cin >> minutes;
    cout << "Frames per second : ";
    cin >> frame;
    total = minutes * 60 * frame;
    cout << "Total number of frames = " << total;
}