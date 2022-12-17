
#include <iostream>

using namespace std;

int main()
{
    // What is a pointer ?  =>
    // pointer is simply a data type which holds the address of other data types
    int m=36;
    int* b = &m;  // syntax of declaring a pointer.
    // OR int *b = &m; // Means no matter where asterisk(*) is given.

    // & => (address of) operator.
    cout<<"The address of m variable is "<<&m<<endl;
    cout<<"The address of m var is "<<b<<endl;

    // * => (value at) dereference operator
    cout<<"The value stored at address b is "<<*b<<endl; //Tells the value stoed at that pointer address.

    // Now our pointer itself has some address, we can see pointer of a pointer by putting 2 stars. =>
    int** c = &b; // Pointer to pointer, means a pointer to store the location of pointer itself.
    cout<<"The address of our pointer b itself is (by c) "<<c<<endl;
    cout<<"The address of our pointer b itself is (by &b) "<<&b<<endl;

    cout<<"The value at pointer b is (This will be the address of our variable) "<<*c<<endl;


    return 0;
}



