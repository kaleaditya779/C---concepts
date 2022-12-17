// constants in cpp..
/* when we declare a variable and its value in func, we can canges it's value throughout the func.
But sometimes we need some variables or declaretions to remain conmstant throughout the program
ex. (pi = 3.1415) So for that purpose we use 'const' keyword before declaring variable. */

/* Note = we can change any type of declared variable in program.. similarly we can make use of const keyword to make any type of declaration constant. 
ex. int, float, char, & many more.. */


#include <iostream>

#include <iomanip>

using namespace std;
 
int main()
{
    //Example of changing declaration.
    int a = 45;
    cout<<"The value of a before change is "<<a<<endl;
    a = 110;
    cout<<"The changed value of a is "<<a<<endl;

    //Example of constant declaration.
    const float pi = 3.1415;
    const char m = 'S';
    cout<<"The value of pi is "<<pi<<endl;
    cout<<"The value of m is "<<m<<endl;
    // pi = 5; As we can see if we try to change the value of const declaration, it will show error.

/* MANIPULATORS =
 check this web for manipulators = https://www.geeksforgeeks.org/manipulators-in-c-with-examples/#:~:text=Some%20important%20manipulators%20in%20%3Ciomanip,precision%20of%20floating%2Dpoint%20values.

    1) Manipulators are operators that are used to format the data display.
    2) To access manipulators, the file iomanip.h should be included in the program.

Some IMP manipulators from <iostream> file =
    1. endl: It is defined in ostream. It is used to enter a new line and after entering a new line it flushes (i.e. it forces all the output written on the screen or in the file) the output stream.

    2. ws: It is defined in istream and is used to ignore the whitespaces in the string sequence.

    3. ends: It is also defined in ostream and it inserts a null character into the output stream. It typically works with std::ostrstream, when the associated output buffer needs to be null-terminated to be processed as a C string.

    4. flush: It is also defined in ostream and it flushes the output stream, i.e. it forces all the output written on the screen or in the file. Without flush, the output would be the same, but may not appear in real-time. 

some IMP manipulators from <iomanip> file =
    1. setw (val): It is used to set the field width in output operations.
    2. setfill (c): It is used to fill the character ‘c’ on output stream.
    3. setprecision (val): It sets val as the new value for the precision of floating-point values.
    4. setbase(val): It is used to set the numeric base value for numeric values.
    5. setiosflags(flag): It is used to set the format flags specified by parameter mask.
    6. resetiosflags(m): It is used to reset the format flags specified by parameter mask.
*/

/* OPERATOR PRECEDENCE =

    check this link = https://en.cppreference.com/w/cpp/language/operator_precedence


*/

return 0;
}