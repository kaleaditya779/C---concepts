// Use 'cpp reference' website to know about any cpp syntax.

// There are two types of header files.
    // 1) System header files: It comes with compiler
#include <iostream>
    // 2) User defined header files: It is written by the programmer.
// ex. #include"This.h" (this will throw error if there is no file named this.h in the current directory.)

using namespace std;


int main()
{
    cout<<"Operators in C++";
    int a = 5, b = 10;
    cout<<"\nThese are the types of opearators in C++";

    // 1) Arithmetic opeartor = (+, -, *, /, %)
    cout<<"\n\nARITHMETIC OPERATORS";
    cout<<"\nThe result of a+b is "<<a+b;
    cout<<"\nThe result of a-b is "<<a-b;
    cout<<"\nThe result of a*b is "<<a*b;
    cout<<"\nThe result of a/b is "<<a/b;
    cout<<"\nThe result of a%b is "<<a%b;

    // 2) Increment/decrement operators = (a++, a--, ++a, --a)
    cout<<"\n\nINCREMENT/DECREMENT OPERATORS";
    cout<<"\nThe result of a++ is "<<a++; // a++ or a-- 1st print the variable then increment.
    cout<<"\nThe result of a-- is "<<a--;
    cout<<"\nThe result of ++a is "<<++a; // ++a or --a 1st increment variable then it prints.
    cout<<"\nThe result of --a is "<<--a;

    // 3) Comparison opeartors = (==, !=, >, <, >=, <=)
    cout<<"\n\nCOMPARISON OPERATORS";
    cout<<"\nThe result of a==b is "<<(a==b);   // These comparison operators return 1 if the comparison is true
    cout<<"\nThe result of a!=b is "<<(a!=b);   // Otherwise when comparison is false they return 0.
    cout<<"\nThe result of a>b is "<<(a>b);
    cout<<"\nThe result of a<b is "<<(a<b);
    cout<<"\nThe result of a>=b is "<<(a>=b);
    cout<<"\nThe result of a<=b is "<<(a<=b);

    // 3) Assignment opeartors = (=) --> Used to assign value to variables.
    // ex. int m = 5, n = 6;
    // ex. char x = 'R';

    // 3) Logical opeartors = (&&, ||, !)
    cout<<"\n\nLOGICAL OPERATORS";
    cout<<"\nThe result of a==b && a<b is "<<((a==b) && (a<b)); // Here both needs to be true.. basically it is logical AND operator.
    cout<<"\nThe result of a==b || a<b is "<<((a==b) || (a<b)); // Basically logical OR operator.
    cout<<"\nThe result of !(a==b) is "<<!(a==b)<<endl; // Logical NOT operator


return 0;
}

