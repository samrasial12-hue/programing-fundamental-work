#include <iostream>
using namespace std;

main()
{
 cout<<" Enter minutes:";
 int minutes;
 cin >>minutes;
cout<<"Enter frames per second:";
 int fps;
 cin>>fps;
 int total;
 total = minutes *60* fps;
cout <<"Enter minutes:";
cout <<" Enter fps:";
cout<<"Total frames="<<total;
}