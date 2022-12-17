#include <iostream>

using namespace std;

// This is about how we can give object of any class as argument to any function.. Including
// those funcs which are member funcs of same class or inside of any another class or independent
// funcs.

class Aaa
{
public:
    int a;
    int b, x;
    void func1()
    {
        cout << "Input a : ";
        cin >> a;
    }
};

// Now here i have given object of class as argument to this function.
// So that it can access the particular data of that object.
void func2(Aaa o1, Aaa o2)
{
    int x, y;
    x = o1.a + o2.a;
    cout << x;
}

// We can also access any class object inside any func, just by creating new object of that class 
// inside the func, if in case we don't want to give object as argument to that func.
void fuu()
{
    Aaa obj3;
    int b;
    b = obj3.a;
}


int main()
{
    Aaa obj1, obj2;
    obj1.func1();
    obj2.func1();
    func2(obj1, obj2);

    return 0;
}
