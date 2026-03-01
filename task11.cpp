#include <iostream>
using namespace std;

main()
{
    string name;
    float matric, inter, ecat, aggregate;
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Matric Marks (out of 1100): ";
    cin >> matric;
    cout << "Enter Intermediate Marks (out of 550): ";
    cin >> inter;
    cout << "Enter ECAT Marks (out of 400): ";
    cin >> ecat;
    aggregate = (matric/1100)*10 + (inter/550)*40 + (ecat/400)*50;
    cout << "Aggregate = " << aggregate << "%";
}