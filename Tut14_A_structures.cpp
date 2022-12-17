
#include <iostream>
#include <string>
using namespace std;

//DEFINATION OF STRUCTURES : Structures (also called structs) are a way to group several related (different datatype) variables into one place. Each variable in the structure is known as a member of the structure. Using different use cases/examples of that structure.

struct Person
    {
        string first_name;
        string last_name;
        int age;
        char gender;
        // Now as we have declared struct of name 'person' & we have given couple of member variables/attributes to it. We can input/add an 'example' of that struct.

    };

int main()
{
    int a[] = {1, 67, 7};
    float b[] = {1.4, 5.65, 7.3087};
    // This is the way to store same type of variables together.

    // Similarly we can store different datatype variables in struct under one of it's use cases.
    // General syntax for making/defining use case or example of struct =>
            /* struct <name of structure> <example name>;
               <example>.<attribute1> = <value1>;
               <example>.<attribute2> = <value2>;
               <example>.<attribute3> = <value3>;  etc..*/

    struct Person Adi;  //Use case no1 of structure Person.
    Adi.first_name = "Aditya";
    Adi.last_name = "Kale";
    Adi.age = 20;
    Adi.gender = 'M';
    
    struct Person Dnyanu;  //Use case no2 os structure Person.
    Dnyanu.first_name = "Dnyaneshwar";
    Dnyanu.last_name = "Injdrale";
    Dnyanu.age = 20;
    Dnyanu.gender = 'M';

    struct Person Chintu;   //Use case no3 os structure Person.
    Chintu.first_name = "Rahul";
    Chintu.last_name = "Kumar";
    Chintu.age = 20;
    Chintu.gender = 'm';

    struct Person Avni;    //Use case no4 os structure Person.
    Avni.first_name = "Avni";
    Avni.last_name = "Lakhataria";
    Avni.age = 19;
    Avni.gender = 'F';

    struct Person Palu;  //Use case no5 os structure Person.
    Palu.first_name = "Palash";
    Palu.last_name = "Dhabale";
    Palu.age = 21;
    Palu.gender = 'M';

    // Now calling the struct use cases...
    cout<<Adi.first_name<<" & "<<Chintu.first_name<<" are friends"<<"."<<endl;
    cout<<Palu.age<<" is the age of "<<Palu.last_name<<" whereas "<<Avni.age<<" is the age of "<<Avni.first_name<<"."<<endl;


    return 0;
}





