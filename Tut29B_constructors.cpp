#include<iostream>

using namespace std;

/*
## Some IMP points of constructors =>

1) If we do not specify a constructor, C++ compiler generates a default constructor for 
object (expects no parameters and has an empty body).
2) Constructors can be overloaded.  (by giving diff set of args, just like func overload)
3) Constructor can not be declared virtual.
4) Constructor cannot be inherited.
5) Constructor make implicit calls to new and delete operators during memory allocation.

## Types of constructors =>

1) Default constructors : Don't have any argument. If we don't declare it explicitely, 
the compiler will consider a default constructor implicitely having empty body.

2) Parameterized Constructors : When we declare constructor having parameters. During 
object creration we also need to give those values to the object. In such case if we don't 
declare default constructor explicitely & also don't give arguments to object. then 
compiler will through error, means in such case it will not take dafault 
constructor implicitely.
uses of parametrized constructors = 
>It is used to initialize the various data elements of different objects with 
different values when they are created.
>It is used to overload constructors.

3) Copy constructor : A copy constructor is a member function that initializes an object 
using another object of the same class.
A common syntax =>
Sample(Sample &t)
{
    id=t.id;
}
*/


