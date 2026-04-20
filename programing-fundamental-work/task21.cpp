#include <iostream>
using namespace std;

main()
{
cout<<"enter age:";
int age;
cin>>age;
cout<<"enter moves:";
int moves;
cin>>moves;
int years;
years =(age+moves)/(moves+1);
cout<<"average years:"<<years;
}