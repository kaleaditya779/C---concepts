#include <iostream>
 
using namespace std;

// Lops in cpp : 1) for loop 2) while loop 3) do-while loop

// We can create infinite "for" as well as infinite "while" loop. By having a condition which never fails in case of for & while(true) for while loop..

/* never ever keep the infinite loop continuously running in cpp.. bez it continue to occupy more more RAM, creating actual effect on the system. Moreover C++ gives direct access to memory. So with great power comes great responsibility.*/


int table_6_and_12()
{
    int six = 6;
    cout<<"The table of 6 using FOR loop"<<endl;
    for (six; six<=60; six = six+6)
    {
        cout<<six<<endl;
    }

    int twelve = 12;
    cout<<"The table of 12 using WHILE loop"<<endl;
    while (twelve<=120)
    {
        cout<<twelve<<endl;
        twelve = twelve+12;
    }
    
    int tb, po;
    cout<<"Enter the number for which you want table : ";
    cin>>tb;
    cout<<endl<<"enter the position upto which you want table : ";
    cin>>po;

    for (int i=1; i<=po; i++)
    {
        cout<<tb*i<<endl;
    }
    return 0;
}



int main()
{
    // for loop in C++
    cout<<"Now the for loop"<<endl;
    for (int a=5; a<=100; a++)  // Arguments of for loop (declaration; condition; increment/decrement)
    {
        cout<<a<<endl;

    }

    cout<<"Now the while loop"<<endl;
    int b = 7;
    while (b<= 100)
    {
        cout<<b<<endl;
        b++;   // Increment operator
    }

    // Do-while loop in C++.
    // How do-while loop is different than while loop is by only 1 factor i.e. for while loop to execute the body of loop it compulsary needs the condition to be true.. But in do-while loop if condition is true it will be as simple as while loop, but when the condition in while loop is false. Still the body of do-while loop executes once... 
    float vx = 0;
    cout<<endl<<"this is do-while loop"<<endl;
    do // This is the do-while loop where condition is true.
    {    // This is the syntax for DO-while loop...
        /* code */
        cout<<vx<<endl;
        vx = vx + 0.5; // Increment statement. (by the way this is the proper typing for increment statement. By this we can increment by any value.)
    } while (vx<10);
    
    cout<<endl<<endl<<endl;
    cout<<"Now this is do-while loop where condition is false"<<endl;
    do
    {
        cout<<vx<<endl; // This do has taken updated value of vx i.e 10 instead of 0 (from previous loop)
        vx++;
    } while (vx<-2);

    cout<<endl<<endl<<endl;
    table_6_and_12();

    return 0;
}