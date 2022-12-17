
#include <iostream>

using namespace std;


/* Struct is very powerful data structure so still why we need classes...?? 
    1) There is no data hiding in struct (access specifiers)
    2) In struct we can only declare vars but in classes we have data mebers as well as functions
    3) */

/* access specifiers = > 1. private, 2. public, 3. protected
    */

/* SOME IMP notes from harry himself :
    1. While accessing private data members of class we have to use functions.. we can't access private vars directly
        eg. private:
                int aa
            obj.aa = 5 // This will give error, since can't access private var directly
            obj.func(aa) // but we can access this member func...
*/


   // HARRY CODE =>
    
class Employee
{
    private:
        int a, b, c;
    public:
        int d, e;
        void setData(int a1, int b1, int c1); // Declaration
        void getData(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
        }
};

void Employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main(){
    Employee harry;
    // harry.a = 134; -->This will throw error as a is private
    harry.d = 34;
    harry.e = 89;
    harry.setData(1,2,4);
    harry.getData();
    return 0;
}

