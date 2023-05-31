#include <iostream>
using namespace std;
class Base
{
public:
    int a;
};
class Derived : public Base
{
public:
    int b;
    void display()
    {
        cout << "\n a= " << a << "\n b= " << b;
    }
};
int main()
{
    // Derived obj;
    Derived *ptr; // Pointer to derived class 
    // ptr = &obj; 
    ptr->a = 100; 
    ptr->b = 200; 
    ptr->display();
}