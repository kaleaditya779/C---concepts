
/* What is an Array ?
    1) An Array is the collection of similar types of items (data types) stored in continuous memory locations.

    sometimes it is not feasible to store the values in different variables by creating them.
    ex. to store the marks of thousands of students,  it will be bullshit to create thousands 
    of different variables. Hence here Array comes as useful alternate.
*/
#include <iostream>

using namespace std;

int main()
{
    int Arr[] = {1,3,45,67,60,68,52,12};  // defining an array.
    
    cout<<Arr[0]<<endl;
    cout<<Arr[1]<<endl;
    cout<<Arr[2]<<endl;
    cout<<Arr[3]<<endl;
    cout<<Arr[4]<<endl;

    cout<<"We can also change value of any location element in array."<<endl;
    Arr[0] = 1001;
    cout<<Arr[0];
    cout<<"But we can't change value of any data type including array if we use const while defining";

    float Arr2[] = {1,2,3,4,5,6,65,54,43,32,21};

    cout<<"We can display array using loops (for/while)"<<endl;
    for (int i=0; i<=10; i++)
    {
        cout<<"The value of "<<i<<"th location element is "<<Arr2[i]<<endl;
    }




    cout<<"\n\n\n";




    cout<<"We can append or add elements to array using loops.\n";
    int Arr3[]={};
    int leng;
    cout<<"How many elements you want to add to array?\n";
    cin>>leng;
    for (int i=0; i<leng;)
    {
        cout<<"Enter your "<<i+1<<"th element : ";
        cin>>Arr3[i];
        i++;
    }

    for (int i=0; i<=leng; i++)
    {
        cout<<Arr3[i]<<endl;
    }




    return 0;
}


