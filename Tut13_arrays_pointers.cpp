
#include <iostream>

using namespace std;

int main()
{
    
    // When it comes to array & pointers. The printing of name of array will itself give the address of starting point of array.
    int asd[]={1,2,3,4};

    cout<<asd<<endl; // this is the address of starting element of array.
    int* m=asd;
    
    cout<<"The address of next element of array is "<<(m+1)<<endl;
    cout<<"The address of next element of array is "<<(m+2)<<endl;
    cout<<"The address of next element of array is "<<(m+3)<<endl<<endl<<endl;
    // We can also dereference them & print there value.
    cout<<"We can also dereference them & print there value."<<endl;
    cout<<"The value of next element of array is "<<*(m+1)<<endl;
    cout<<"The value of next element of array is "<<*(m+2)<<endl;
    cout<<"The value of next element of array is "<<*(m+3)<<endl;

    return 0;
}



