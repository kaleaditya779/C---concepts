#include<iostream>
using namespace std;

// 1) Static member =>
// Static member vars are nothing but "those vars which remain itself for each object"
// what i means is that if we create multiple objects of particular class.... then each object will have it's own set of copy of data members as defined in class itself...
// But if we want some data member or var to remain itself for all objects i.e. objects don't receive copy of that member & then we can perform operation on that... 
// Then in such situation we have to use static data member..

// Ex, we have an employee class. & we create multiple employees as onjects of that class. then we can declare a static var which tells us the count of employees created..

// Static methods =>



// code => 

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }

    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }

    static void getCount(void)
    {
        // cout<<id; // throws an error
        cout<<"The value of count is "<<count<<endl;
    }
};

// Count is the static data member of class Employee
int Employee::count; // Default value is 0
// We need to define static class var like this.. Then have to write inside class as well.

int main()
{
    Employee harry, rohan, lovish;
    // harry.id = 1;
    // harry.count=1; // cannot do this as id and count are private

    harry.setData();
    harry.getData();
    Employee::getCount();

    rohan.setData();
    rohan.getData();
    Employee::getCount();

    lovish.setData();
    lovish.getData();
    Employee::getCount();

    return 0;
}
// End of harrys code






