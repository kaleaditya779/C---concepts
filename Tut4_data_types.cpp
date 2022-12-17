// Variable scopes & data types

// Various data types in cpp are = int, float, char, string, double, boolean
        /* double is just like float the only difference is it is used to store the float having 
         high decimal points */

/* some rules for defining a variable = 
    1) variable names can range from 1 to 255 characters.
    2) Var names must begin with alphabet or underscore (_)
    3) after 1st initial aphabet var names can also contains numbers
    4) var names are case sensitive.
    5) no spaces or special charaters are allowed in var names.
    6) We can't use a reserved (keywords) words as variable names.
*/

#include <iostream>

using namespace std;

void m()
{
    int a =7; //This is local variable
    float b = 12.454;
    char c = 'G';
    bool d = 1; //Boolean can be either 1 or 0 or True or False.
    double e = 34.4564565324435;
    cout<<"The different data type variables are : "<<a; //Simple integer type var.
    cout<<"\n"<<b; //This is float
    cout<<"\n"<<c; //This is character. We can give only one character to char type of variable.
    cout<<"\n"<<d; //This is boolean type or binmary type var, means either true of false.
    cout<<"\n"<<e; //This is double type var means more precise float.

}

// in cpp we can use \n as well as <<endl as newline character.

int a = 343434; //This is global variable.

int main()
{
    m(); //Now here i have created one more func & executed it inside main func.

    int a = 67; //The case when samw identifier local variable exists, it will give priority to it.

    cout<<"\nThis is the value of global variable a : "<<::a;
    cout<<"\nThis is the value of local variable a : "<<a;

    return 0;
}
/* NOTE : We can access global variable in local region by using (::), but we can't access local variable
 in global region. */

/* Just like built in types of variables there are 2 more types of variables in cpp
 that are 2) user defined = struct, union, enum, classes.
 3) derived type variables = Array, functions & pointers. */