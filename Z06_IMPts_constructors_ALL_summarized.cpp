
/*
So i have created this file to summarizr the entire constructor topic in c++ in my way
& the various ways i found it.
*/

/* 
CONSTRUCTOR = That member func or method of class which executes automatically, without proper
invoking like other member funcs.

# Constructor is invoked automatically at the time of object creation.
# It is used to initialize the data members of new objects generally.
# The constructor in C++ has the same name as the class or structure.
# Constructor can not be declared virtual.
# Constructor cannot be inherited.
# Constructor make implicit calls to new and delete operators during memory allocation.

*/

// TYPES = 
/*
1) Default constructor :  Don't have any argument. If we don't declare it explicitely, the 
compiler will consider a default constructor implicitely having empty body.

    But the main trick is here => If we have declared any of the other parametrized or copy 
    constructors, then the compiler don't assume the default one implicitely. And the thing that
    can go wrong in this is we can't declare/generate empty object of that class. Since this time
    compiler don't consider the default constructor by implicitly (by itself). In such condition if
    we have to initialize empty object, we need to declare the default constructor explicitely.

*/

/*
2) Parameterized Constructors : When we declare constructor having parameters. During 
object creration we also need to give those values to the object.

    We can have any number of parametrized constructors to same class. The only thing we have to
    take care is giving them different argument list / different parameters. YES this is what
    constructor overloading is. Just like funcs having same name & different arg list, compiler
    is capable of differenciating between different constructors call by checking args we have 
    provided during object creation.

    There is also a concept called default arg to paramatrized constructor. Means we can also give
    constant arg value to any constructor. Then during object call, if we don't input any value at
    that arg position the compiler will take the default one. But the beauty is we can also override
    this by providing our value at that arg position during object call.
*/

/*
3) Copy constructor : A copy constructor is a member function that initializes an object 
using another object of the same class.
A common syntax =>
Sample(Sample &t)
{
    id=t.id;
}
*/



