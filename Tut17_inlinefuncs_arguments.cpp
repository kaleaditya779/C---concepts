
#include<iostream>
using namespace std;

// Inline funcs =>
/*When the program executes the function call instruction the CPU stores the memory address of the instruction following the function call, copies the arguments of the function on the stack and finally transfers control to the specified function. The CPU then executes the function code, stores the function return value in a predefined memory location/register and returns control to the calling function. This can become overhead if the execution time of function is less than the switching time from the caller function to called function (callee). For functions that are large and/or perform complex tasks, the overhead of the function call is usually insignificant compared to the amount of time the function takes to run. However, for small, commonly-used functions, the time needed to make the function call is often a lot more than the time needed to actually execute the function’s code. This overhead occurs for small functions because execution time of small function is less than the switching time.*/

/*C++ provides an inline functions to reduce the function call overhead. Inline function is a function that is expanded in line when it is called. When the inline function is called whole code of the inline function gets inserted or substituted at the point of inline function call. This substitution is performed by the C++ compiler at compile time. Inline function may increase efficiency if it is small.*/

inline int product_addone(int a, int b)
{
    // Don't use line func when the vars in func retain their values (memory) means static vars. This will make func heavy... Also don't use inlines for larger funcs... So that will fundamentally erase the concept of inline func.
    // static int m = 0;
    // m=m+1;
    return a*b+1;
}

// Default args & const args=>
 // Onw more IMP thing about default arg is that we have to write default arg after formal arg.. (it is just a syntax)
 // There is also const arg in this func, just like with constant declaration of variable, we declare const arg when we never want to change the value of that arg.
float money_received(int FDmoney, float factor = 1.04, const int moo=90) // This is default argument. Means it we don't pass any value in place of this argument while calling. It will automatically execute with this default value of default argument.
{
    return FDmoney*factor;

}

int main()
{
    int x, y, prin;
    cout<<"Enter the values of a & b : ";
    cin>>x>>y;
    cout<<endl<<"The product of a & b with one added is "<<product_addone(x,y);
    cout<<endl<<"The product of a & b with one added is "<<product_addone(x,y);
    cout<<endl<<"The product of a & b with one added is "<<product_addone(x,y);
    cout<<endl<<"The product of a & b with one added is "<<product_addone(x,y);
    cout<<endl<<"The product of a & b with one added is "<<product_addone(x,y);
    cout<<endl<<endl;
    cout<<"Enter your principal amount : ";
    cin>>prin;
    cout<<endl<<"Your principal is "<<prin<<" Rs & you will receive "<<money_received(prin)<<" Rs";
    // Now here while calling i have passed only one argument, the control will consider the value of other argument as defined above means default value...
    cout<<endl<<"If you are old age person means VIP, for your "<<prin<<" Rs i.e. same money you will get "<<money_received(prin, 1.1)<<endl;
}



