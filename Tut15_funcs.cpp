

// The meaning of function based programming is 'to break the program in different pieces or functions then individually execute them according to proper sequence.
// Also function gives us the way of "do once use many times...", means we can create function for certain task. Then by just passing proper and required argument we can perform that task everytime, without writing code for each time.

#include <iostream>
#include <string>

using namespace std;

float sum(float a, float b)
{
    float c = a+b;
    return c;
}
// in case we have many functions linked to each other for error free execution of program, but it will be very difficult to manage their place properly. So instead of that there is a concept of "function prototype". means just writing func name & argument in proper order.... Eg.
string even_or_odd(int); // Now i have typed the prototype of this function before it's use i.e. in main func & the actual func is written after main func. So this prototype helps control to understand that which funcs he has to take in which order...

// int func(int a, int b) (acceptable)
// int func(int a, b) (NOT acceptable)
// int func(int, int) (acceptable)
// void func() Func without parameter (acceptable)
// void func(void) Func without parameter (acceptable)


int main()
{
    float num1, num2;
    int a1;
    cout<<"Enter your 1st number : ";
    cin>>num1;
    cout<<"Enter your 2st number : ";
    cin>>num2;
    cout<<"The sum is : "<<sum(num1, num2)<<endl;
    cout<<"\n\n\n";
    cout<<"Function to check whether inputed number is even or odd"<<endl;
    cout<<"Enter a number : ";
    cin>>a1;
    cout<<endl;
    cout<<"your number is : "<<even_or_odd(a1)<<endl;


    return 0;
}

// Now the parameters that we give while defination of func are known as "Formal parameters" & those which we pass to func while using it are "actual parameters". Ex. here int a is formal parameter & a1 is actual parameter. 
// (We can have formal parameters & actual parameters as same named vars, that's no problem. But it is recommanded to have different identifiers to avoid confusion.)
string even_or_odd(int a)
{
    string m;
    if (a%2 == 0)
    {
        m = "even";
    }
    else
    {
        m = "odd";
    }
    return m;
}





