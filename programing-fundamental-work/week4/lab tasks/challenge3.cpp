#include<iostream>
using namespace std;
main()
{
    int firstnumber ,secondnumber;
    string op;

    cout<<"Welcome to the calculator "<<endl;
    cout<<"Enter first number";
    cin>>firstnumber;
    cout<<"Enter the operator: ";
    cin>>op;
    cout<<"Enter second number: ";
    cin>>secondnumber;

    if(op=="+")
        cout<<firstnumber<<"-"<<secondnumber<<"="<<firstnumber-secondnumber;
    if(op=="-")
        cout<<firstnumber<<"+"<<secondnumber<<"="<<firstnumber+secondnumber;
    if(op=="*")
        cout<<firstnumber<<"/"<<secondnumber<<"="<<firstnumber/secondnumber;
    if(op=="/")
        cout<<firstnumber<<"x"<<secondnumber<<"="<<firstnumber*secondnumber;
}