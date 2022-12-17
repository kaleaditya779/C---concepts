// variables & typecasting =


#include <iostream>
 
using namespace std;

int ma = 100;

int main()
{
    int a, b, ma; // The important thing is that we have to separately declare the local variable. means if i erase "ma" declared here, then all the operations on that variable will be actually happening on global variable.
    cout<<"Enter a"<<endl;
    cin>>a;
    cout<<"Enter b"<<endl;
    cin>>b;
    ma = a + b;
    cout<<"The sum is "<<ma<<endl;
    // But here instead of local variable, i want to access global variable, then what i will do is use (::) global scope operator
    cout<<"The global variable is "<<::ma<<endl;



/* Some IMP notes about "scope of variable" =
    1. For operation on any variable inside function, the preferance will be at local variable, means if there exists 2 vars having same identifier then while performing operation on that var inside func the priority is to local. unless specified by global scope operator (::).

    2. While doing 1. if control don't find that var defined inside func then & then only it will go towards global scope, to check for that variable.

    3. IMP thing => We can access global variable from any number of funcs, but we can't access a) local variable globally & b) local variable from one func to another func.
  THANKS... */

    float re = 60.4;
    double rf = 60.4;
// Any number having decimal point is by default considered by cpp is 'double' instead of float.
// to specify it as float or pass somewhere as float we do this =
    60.4f; // i.e. to add f after number (float)
    60.4l; // similarly for 'long double' we use l
// can use capital as well as small l or f.

// We use 'sizeof() function to know the bit size of any variable in cpp
    cout<<"The size of 10.5 is "<<sizeof(10.5)<<endl;
    cout<<"The size of 10.5f is "<<sizeof(10.f)<<endl;
    cout<<"The size of 10.5F is "<<sizeof(10.5F)<<endl;
    cout<<"The size of 10.5l is "<<sizeof(10.5l)<<endl;
    cout<<"The size of 10.5L is "<<sizeof(10.5L)<<endl;



// Reference variables =>
/* basically what this means is 'calling the same variable value by different names. Just like a person can have many names.

Pranav ---> Pinu ---> pinya ---> pillu ---> Skeleton

All identifiers give same person... */
    int pinu = 68;
    int & pranav = pinu; //This is the way to define reference var
    cout<<endl<<"The value stored in identifier pinu is "<<pinu<<endl;
    cout<<"The value stored in identifier pranav is "<<pranav<<endl;
    cout<<"Basically these vars posses NOT SIMILAR BUT SAME VALUE... Means they points to the same value."<<endl<<endl;


// Typecasting => converting type of var from one to another.
    float vari = 40.55;
    int varia = 40;
    cout<<"The vari is "<<int(vari)<<endl; //this is the syntax for typecasting.
    cout<<"The vari is "<<(int)vari<<endl; // We can also use this syntax.
// when conversion from float to int it will just ignore decimal part....
// REMEMBER = it will not round up to ignore decimal part.

    cout<<"The varia is "<<float(varia)<<endl;
    cout<<"The varia is "<<(float)varia<<endl;

    cout<<"The sum of int varia & float vari is "<<vari+varia<<endl;
    cout<<"The sum of int varia & int vari is "<<int(vari)+varia<<endl;
    cout<<"The sum of float varia & float vari is "<<vari+float(varia)<<endl;
    cout<<"The sum of int varia & float vari is "<<int(vari)+float(varia)<<endl;
    
    return 0; // The IMP thing about return keyword is the stuff written below of it will not get executed.
}

