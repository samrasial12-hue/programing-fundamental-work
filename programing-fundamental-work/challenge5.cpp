#include<iostream>
using namespace std;

main()
{
string a,b,c;
int e,f,g;

cout<<"Enter name of first brother: ";
cin>>a;
cout<<"Enter age of first brother: ";
cin>>e;

cout<<"Enter name of second brother: ";
cin>>b;
cout<<"Enter age of second brother: ";
cin>>f;

cout<<"Enter name of third brother: ";
cin>>c;
cout<<"Enter age of third brother: ";
cin>>g;

if(e<f)
{
    if(e<g)
    {
        cout<<a<<" is youngest";
    }
}

if(f<e)
{
    if(f<g)
    {
        cout<<b<<" is youngest";
    }
}

if(g<e)
{
    if(g<f)
    {
        cout<<c<<" is youngest";
    }
}

}