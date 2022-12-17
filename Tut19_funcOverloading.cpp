#include <iostream>
#include <string>

using namespace std;

// Function overloading is a feature of object-oriented programming where two or more functions can have the same name but different parameters.
// When a function name is overloaded with different jobs it is called Function Overloading.
//  In Function Overloading “Function” name should be the same and the arguments should be different. Function overloading can be considered as an example of a polymorphism feature in C++.

string func1(int m) // Here i have created func1 with 1 int parameter..
{
    if (m%2 == 0)
    {
        return "Even";
    }
    else
    {
        return "Odd";
    }
}

string func1(int m, int n)
{
    if ((m+n)%2 == 0)
    {
        return "Even";
    }
    else
    {
        return "Odd";
    }
}

float area(float radius)
{
    return (3.14*radius*radius);
}

float area(float length, float width)
{
    return (length*width);
}


int main()
{
    int choice;
    cout<<"Which operation do you want to run : "<<endl;
    cout<<"1) Even or odd\n2) area"<<endl;
    cout<<"Your response : "; cin>>choice;
    
    switch (choice)
    {
    case 1:
        int a, b;
        cout<<"Enter int : "; cin>>a; cout<<"Your number is "<<func1(a)<<endl;
        cout<<"Enter 2nd int : "; cin>>b; cout<<"The sum of both variables is "<<func1(a,b)<<endl;
        break;
    case 2:
        float r, l, w;
        cout<<"Enter length : "; cin>>l;
        cout<<"Enter width : "; cin>>w;
        cout<<"Area of rectangle is "<<area(l,w)<<endl;
        cout<<"Enter radius of circle : "; cin>>r;
        cout<<"Area of circle is : "<<area(r);
        break;

    default:
        cout<<"Wrong input";
    }
    return 0;
}
