#include <iostream>

using namespace std;

/* Constructor =>

Constructor in C++ is a special method that is invoked automatically at the time of 
object creation. It is used to initialize the data members of new objects generally. 
The constructor in C++ has the same name as the class or structure. Constructor is 
invoked at the time of object creation. It constructs the values i.e. provides data for 
the object which is why it is known as constructors.
*/


class Friendship
{
    string name;
    string friend1;
    string friend2;
    string friend3;
    public:
        Friendship()
        {
            cout<<"This is default constructor";
            cout<<endl<<"Enter your name : ";
            cin>>name;
        }

        void setData()
        {
            cout<<endl<<"Enter the friend1 : ";
            cin>>friend1;
            cout<<endl<<"Enter the friend2 : ";
            cin>>friend2;
            cout<<endl<<"Enter the friend3 : ";
            cin>>friend3;
        }

        void DispData(Friendship o1)
        {
            cout<<endl<<"The friend1 of "<<o1.name<<" is "<<o1.friend1;
            cout<<endl<<"The friend2 of "<<o1.name<<" is "<<o1.friend2;
            cout<<endl<<"The friend3 of "<<o1.name<<" is "<<o1.friend3;
        }
     
};

int main()
{
    // As we can see that default constructor got invoked without any written invoking approach.
    // Even if when we don't call any other method for that object, the constructor automatically got called...
    Friendship Aditya;
    
    cout<<endl<<"I have printed this statement to clarify that constructor for any particular object gets called during the creation of object itselt.. Not during calling any another method for that object.";
    cout<<endl<<"Means if this statement is printing after constructor call & before execution of any other method for that object... the point is true.";

    Aditya.setData();
    Aditya.DispData(Aditya);
    

    return 0;
}