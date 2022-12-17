#include <iostream>

using namespace std;


/* 
In this lecture, memory allocation means the memory difference of class & object.
Means when we create a class only template memory & the memory of static vars, static member funcs get stored in the name of class...
But as far as object of that class is considered, when we create the object the actual data member variable memory gets assigned in the name of that object. Like arrays, simple vars , etc in the object.
Whenever we create any object of class the memory gets allocated to it separately. Means different objects of same class get it's own memory.
*/













class Lockheed
{
    string order_country[20];
    string order_item[20];
    int count;
    string order_requirements();

    public :
        void countSet() 
        {
            cout<<"How many customers are there (<20) : ";
            cin>>count;
            cout<<endl;
        }

        void accept_orders()
        {
            for (int i; i<count; i++)
            {
                cout<<"Enter the name of receiver country : ";
                cin>>order_country[i];
                cout<<endl<<"Enter the item name : ";
                cin>>order_item[i];
            }
            cout<<endl<<"Your orders & country pairs are successfully inputed..";
        }

        void display_publicDetails_of_order()
        {
            for (int i; i<count; i++)
            {
                cout<<i<<order_country[i]<<" is the country."<<endl;
                cout<<" There order is : "<<order_item;
                cout<<"Public details of order : ";
                cout<<order_requirements();
                cout<<endl;
            }


        }
};


string Lockheed :: order_requirements()
{
    // Confidential :
    string info = "This is some random order requirements. This content/info needs to remain confidential";
    // These are some random codes/info that needs to be confidential..
    int reuires[10] = {676,547,3456,24,446,235,674,242,745,765};

    // Public release section :
    string public_info = "This little info from all the info is going in public section.";
    return public_info;
}


int main()
{
    Lockheed obj;
    obj.countSet();
    obj.accept_orders();
    obj.display_publicDetails_of_order();
    // do
    // {
    //     cout<<"*********** MENU **************";
    //     int ch;
    //     cout<<"\n1) accept orders\n2) display orders\n3) Exit";
    //     Lockheed obj;
    //     cout<<"Enter your choice : ";
    //     cin>>ch;
    //     if (ch == 1)
    //     {
    //         obj.countSet();
    //         obj.accept_orders();
    //         break;
    //     }
    //     else if (ch ==2)
    //     {
    //         obj.display_publicDetails_of_order();
    //         break;
    //     }
    //     else
    //     {
    //         break;
    //     }
    // }while (true);
    return 0;
}

