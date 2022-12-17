#include<iostream>

using namespace std;

// Basically we can create multiple objects of same class using array method..
// Means array which contains objects of classes, we can access them just like accessing array element
// Ex. class Aaa
//    Aaa obj_array[5]; //This will create 5 objects as elements of array.

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "Enter the id of employee" << endl;
        cin >> id;
    }

    void getId(void)
    {
        cout << "The id of this employee is " << id << endl;
    }
};

int main()
{
    Employee fb[4]; // Here we have created 4 objects of employee class, which are successively stored in array called fb.
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }

    return 0;
}