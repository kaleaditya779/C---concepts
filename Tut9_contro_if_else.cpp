/* There are three types of basic control structures.
1) Sequence control structure
    Entry -> Action1 -> Action2 -> Exit
2) Selection control structure
    Entry -> Condition -> If true -> Action1 -> Exit
                       -> If false -> Action2 -> Exit
3) Loop structure
    Entry -> Condition -> If true -> Action1 -> Back to loop i.e. condition
                       -> If false -> Action2 -> Exit
*/


#include <iostream>

using namespace std;

int main()
{
    int age;
    cout<<"Plz type your age "<<endl;
    cin>>age;

    if (age>=18 && age<=50)
    {
        cout<<"You are eligible for party"<<endl;
    }

    else if (age>50 && age<100)
    {
        cout<<"You are too old"<<endl;
    }

    else if (0<age && age<18)
    {
        cout<<"Sorry!! You are not eligible"<<endl;
    }

    else
    {
        cout<<"Your age does not exist"<<endl;
    }


    // Switch cases selection statement..

    switch (age)
    {
    case 18:
        cout<<"Your age is eligible"<<endl;
        break; // when the given case condition comes out to be true, then this break statement comes out of the switch.
    // If we don't apply break then control will execute each case below of that 1 case which came as true. So to avoid that we use break statement.
    case 1:
        cout<<"Your age is not eligible"<<endl;
        break;
    
    default:
        cout<<"There is no special case for your age value"<<endl;
        break;
    }


    return 0;
}
