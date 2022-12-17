#include<iostream>
using namespace std;
/*
What is reference variable?
    A variable or so to say an identifier which provides an alternate name for the previously defined or already existing variable is "Reference variable"
*/

int main()
{
    int base_var = 69;
    int &reference_var = base_var;
    // So here we have created an reference var for our base var.
    cout<<reference_var<<endl;
    // This reference var means if we change any of base or reference variable the another one will automatically get changed...

}



