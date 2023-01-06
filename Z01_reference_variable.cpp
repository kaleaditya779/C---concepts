#include<iostream>
using namespace std;
/*
What is reference variable?
    A variable or so to say an identifier which provides an alternate name for the previously defined or already existing variable is "Reference variable"
*/

int main()
{
    int base_var = 69;
    int & reference_var = base_var;
    // So here we have created an reference var for our base var.
    cout<<reference_var<<endl;
    // This reference var means if we change any of base or reference variable the another one will automatically get changed...

}

/*
ANOTHER EXAMPLE = 


void func_swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    // cout<<"after swap"<<a<<endl;
    // cout<<"after swap"<<b<<endl;
}

int main()
{
    int x, y;
    cout<<"Enter the value of x : ";
    cin>>x;
    cout<<"Enter the value of y : ";
    cin>>y;
    cout<<x/y;
    func_swap(x,y);
    cout<<"The values after swap are : "<<endl;
    cout<<"x : "<<x;
    cout<<endl;
    cout<<"y : "<<y<<endl;
    cout<<x/y;

    return 0;
}

*/

