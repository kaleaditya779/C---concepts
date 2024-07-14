#include <iostream>
using namespace std;

/*
In C++, exceptions are runtime anomalies or abnormal conditions that a program encounters during its execution (runtime). The process of handling these exceptions is called exception handling. Using the exception handling mechanism, the control from one part of the program where the exception occurred can be transferred to another part of the code.

Errors: 1) Compile Time 2) Run Time (during execution of program)
1) Compile Time Errors: In C++, compile-time errors cannot be handled in the same way as runtime errors because they occur before the program is executed.
2) Run time errors/exceptions can be handled and managed, so that it can be made sure that execution of program does not stop wrongly..

Types of C++ Exceptions:
1) Synchronous: Exceptions that happen when something goes wrong because of a mistake in the input data or when the program is not equipped to handle the current type of data it’s working with, such as dividing a number by zero.
2) Asynchronous: Exceptions that are beyond the program’s control, such as disc failure, keyboard interrupts, etc.

*/

void fun(int* ptr, int x) 
{
    if (ptr == NULL)
        throw ptr;
    if (x == 0)
        throw x;
    /* Some functionality */
}

class Test {
public:
    Test() {
        cout<<endl<<"Construtor of Test executed..";
    }

    ~Test() {
        cout<<endl<<"Destrutor of Test executed!!";
    }
};

int main()
{
    try
    {
        // Code which may cause runtime error..
        // throw SomeExceptionType("Error message");
    }
    catch(...) // (ExceptionName e1)
    {
        // catch block catches the exception that is thrown from try block
    }

    // try block
    try {
        int numerator = 10;
        int denominator = 0;
        int res;
 
        // check if denominator is 0 then throw runtime
        // error.
        if (denominator == 0) {
            throw runtime_error(
                "Division by zero not allowed!");
        }
 
        // calculate result if no exception occurs
        res = numerator / denominator;
        //[printing result after division
        cout << "Result after division: " << res << endl;
    }
    // catch block to catch the thrown exception
    catch (const exception& e) {
        // print the exception
        cout << "Exception " << e.what() << endl;
    }

    try {
        throw 69;
    } catch (...) {
        // This is catch-all block.. It is like else {}. All types of exceptions that are not defined in individual catch blocks, end up here. Means they are catched by this catch all block.
        cout<<"We don't no the type of exception!!"<<endl;
    }

    try {
        fun(NULL, 0);
    }
    catch (...) {
        cout << "Caught exception from fun()";
    }

    // nesting of try/catch
    try {
        try {
            throw 20;
        }
        catch (int n) {
            cout <<endl<< "Handle Partially ";
            throw; // Re-throwing an exception
        }
    }
    catch (int n) {
        cout <<endl<< "Handle remaining ";
    }

    // When an exception is thrown, all objects created inside the enclosing try block are destroyed before the control is transferred to the catch block.
    try {
        Test obj;

        throw 88;
    } catch(int exception) {
        cout<<endl<<exception;
    }










    return 0;
}

// Note: Multiple catch statements can be used to catch different type of exceptions thrown by try block.

// In C++, both basic types and objects can be thrown as exceptions.

/*
1. try in C++
The try keyword represents a block of code that may throw an exception placed inside the try block. It’s followed by one or more catch blocks. If an exception occurs, try block throws that exception.

2. catch in C++
The catch statement represents a block of code that is executed when a particular exception is thrown from the try block. The code to handle the exception is written inside the catch block.

3. throw in C++
An exception in C++ can be thrown using the throw keyword. When a program encounters a throw statement, then it immediately terminates the current function and starts finding a matching catch block to handle the thrown exception.
*/

