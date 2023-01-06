#include <iostream>


class classA
{
    int a;
    public:
        void funcA() { a = 69; }
        void print()
        {
            std::cout<<"The value is "<<a<<std::endl;
        }
        void funcB()
        {
            std::cout<<"Just created so that can invoke this member using return of outside func having type of class."<<std::endl;
            std::cout<<"The value of variable still is "<<a<<" which was changed for that object during function call, & now we are using return type of that func as object to call this member to justify this.";
        }
};


// We can create a function having type of class, rather than of any data type...
// Such funtion have to return the object of that class, where some modifications are done on that 
// object inside the function.
classA funcX()
{
    
    classA o1;
    o1.funcA();
    o1.print();
    return o1;  
}





int main()
{
    funcX();
    
    classA funcX();
    funcX().funcB();
    

    return 0;
}