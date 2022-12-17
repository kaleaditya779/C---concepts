
#include <iostream>
using namespace std;

// Recursions => 
/* The process in which a function calls itself directly or indirectly is called recursion and the corresponding function is called a recursive function. Using a recursive algorithm, certain problems can be solved quite easily*/

/*A recursive function solves a particular problem by calling a copy of itself and solving smaller subproblems of the original problems. Many more recursive calls can be generated as and when required. It is essential to know that we should provide a certain case in order to terminate this recursion process. So we can say that every time the function calls itself with a simpler version of the original problem.*/

// Ex. the func for finding factorial of numbers...
int facto(int a)
{
    if (a<=1)
    {
        return 1;
    }
    else
    {
        // Since n! = n*(n-1)!
        return a*facto(a-1);  // This is calling func inside of same func...
    }
}


// Fibbonacci series is another use case for recursions of func..
int fibb(int); // Just given prototype so that control finds same func written after main func.

int main()
{
    int choice;
    cout<<"\nYou have 2 choices :\n1) Enter 1 for executing factorial algo.\n2) Enter 2 for executing fibbonacci algo."<<endl;
    cout<<"Your response : ";
    cin>>choice;
    switch (choice)
    {
    case 1 :
        int num;
        cout<<"\nEnter your number to find it's factorial : ";
        cin>>num;

        if (num < 0)
        {
            cout<<"\nFactorial DON'T EXIST for negative numbers.\n";
        }
        else
        {
            cout<<endl<<"The factorial of "<<num<<" is "<<facto(num)<<endl<<endl;
        }
        break;
    
    case 2 :
        int num1;
        cout<<"\nEnter your number to find the term in fibbonacci series at that position : ";
        cin>>num1;
        if (num1 <= 0)
        {
            cout<<"Invalid input";
        }
        else
        {
            cout<<"\nThe term in fibbonacci series at "<<num1<<"th position is "<<fibb(num1)<<endl;
        }
        break;

    default:
        cout<<"Wrong input";
        break;
    }
    return 0;
}

int fibb(int b)
{
    if (b == 1)
    {
        return 1;
    }
    else if (b == 2)
    {
        return 1;
    }
    else
    {
        return (fibb(b-2)+fibb(b-1));
    }
}
