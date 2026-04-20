#include<iostream>
using namespace std;
main()
{
    int salary=10000;
    int laptopprice=50000;
    int advsalarypercent=50;

    int month=6;
    int totaladvsalary=(salary*50/100)*month;

    if(totaladvsalary>=laptopprice)
    {cout<<"You can purchase a laptop";}

    if(totaladvsalary<laptopprice)
    {int reqmonth;
    reqmonth=laptopprice/(salary*50/100);
    cout<<"Months required to buy laptop: "<<reqmonth;}
}