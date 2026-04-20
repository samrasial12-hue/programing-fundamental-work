#include <iostream>
using namespace std;

int main()
{
    string shape;
    float num1, num2;
    float pi = 3.14;

    cin >> shape;
    cin >> num1;
    if (shape == "Square") 
    {
      float num = num1 * num1;
        cout << num;
    }

    if (shape == "Rectangle")
     {
        cin >> num2;
       float num = num1 * num2;
        cout << num;
    }

    if (shape == "Circle")
     {
        float num = pi * num1 * num1;
        cout << num;
    }
    if(shape == " triangle")
    {
        cin >> num2;
       float num = (1/2.0) * num1 * num2;
        cout << num;
    }
}
