#include<iostream>
using namespace std;

main()
{
int area, width, height, walls;
cout<<"Enter paint area:";
cin>>area;
cout<<"Enter width:";
cin>>width;cout<<"Enter height:";
cin>>height;
walls=area/(width*height);
cout<<"walls painted"<<walls;
}