
#include <iostream>

using namespace std;

// ENUS :
/* Enumerated type (enumeration) is a user-defined data type which can be assigned some
limited values. These values are defined by the programmer at the time of declaring the
enumerated type.   */

// Basically enum is a way to give name to a value. (name to any number.)



int main()
{
    int A = 0;
    int B = 1;
    int C = 2;
    int value = 0;
    if (value == A)
    {
        cout<<"Yeppppp..."<<endl;
    }
     // To do such kind of operations, means when we have to assign some words/letters to numbers/values we use enums.

    enum example
    {
        a=5, b=7, h=9, f, g
    };
    //example val = 9; This will show error as inside enum named example, we can assign only those names(values) to variables which are defined inside enum.
    //eg.
    example val2 = b;
    example val4=h;
    cout<<val2<<endl;
    cout<<val4<<endl;

    cout<< (val2 == 7)<<endl; // As we can see ultimately the value of that variable becomes equal to enum value to which we have set name. (This is coming 1, bez it is true. (boolean))

    return 0;
}








