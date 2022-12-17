

#include <iostream>
#include <string>
using namespace std;

// UNIONS
/* 1) A union is a type of structure that can be used where the amount of memory used 
is a key factor. 
    2)Similarly to the structure, the union can contain different types of data types.
    3) Each time a new variable is initialized from the union it overwrites the 
    previous in C language but in C++ we also don’t need this keyword and uses that 
    memory location.
    4) This is most useful when the type of data being passed through functions is 
    unknown, using a union which contains all possible data types can remedy this 
    problem.
    5) It is declared by using the keyword “union“.*/


/* Basically union is that type of structure where for each initialization or use case
or example, we can use only one member variable.... If we try to give more than one
member variable to that instance, it will instead generate garbage value... SO union is
important when MEMORY CONSERVATION is primary goal. */

union reward
{
    int money; // For each use case we can use only one of these member vars.
    char medal;
    // string car;  In union we can't use string datatype, bez the control has already fixed bytes of member vars, as in string the bytesize can go tooo high...
    float dollars;
};

int main()
{
    union reward adi;
    adi.dollars = 6.10;
    adi.medal = 'A';  // Now here i have defined more than one member variable for one instance, the control will instead give garbage value.
    cout<<adi.dollars<<endl;
    cout<<adi.medal<<endl;  // Now this will generate garbage.

    return 0;
}








