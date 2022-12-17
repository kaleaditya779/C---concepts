#include <iostream>

using namespace std;

// Simple swap
void swap_func(int a, int b)
{
    int temp = a;
    a=b;
    b=temp;
}

// Call by reference using pointers...
void swap_pointer_reference(int *m, int *n)
{
    int temp = *m;
    *m = *n;
    *n = temp;
}

// Call by reference using C++ reference variables..
// int &m = c (means m & c will point to same value. if value of any one var gets change that will also change the value of second var.)
void swap_reference_var(int &u, int &v)
{
    int temp = u;
    u=v;
    v=temp;
}



int main()
{
    int x, y;
    // int x = 1, y = 6;
    cout<<"Enter x : ";
    cin>>x;
    cout<<endl<<"Enter y : ";
    cin>>y;

    int* addressof_x = &x;
    int* addressof_y = &y;

    cout<<"The value of x before swapping is "<<x<<". The value of y before swapping is "<<y<<endl;
    swap_func(x, y);
    cout<<"The value of x after swapping is "<<x<<". The value of y after swapping is "<<y<<endl;
// Even after swaping the x,y the values remains same. this is bez the func makes copy of the x & y variables & those copy vars get destroyed after end of execution but the real values i.e. those in main func remains unchanged.

// Now to make them change we have to "call the func by reference by pointers".... basically we have to give address of particular vars which we want to change permanently.
    cout<<endl<<"Now using the concept of calling the func with reference of pointers"<<endl;
    swap_pointer_reference(addressof_x, addressof_y);
    cout<<"The value of x after swapping is "<<x<<". The value of y after swapping is "<<y<<endl<<endl;
    cout<<"Swapping using reference var in C++. Means both variable will point to same value."<<endl;
    swap_reference_var(x,y); // Now x & u are reference vars for each other... change in one will reflect in other as well... similarly y & v are reference vars of each other.
    cout<<"The value of x after swapping twice is "<<x<<". The value of y after swapping twice is "<<y<<endl<<endl;
    return 0;
}
