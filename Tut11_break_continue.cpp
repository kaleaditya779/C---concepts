
#include <iostream>

using namespace std;

int main()
{
    for (int a=0; a<=20; a++)
    {
        cout<<endl<<a;
        if (a==4)
        {
            break;  // what this 'break' does is that while itrating the loop when value become 4 it will execute this statement i.e. it will exit the loop. but 4 will print, since the cout statement is written above the break statement.
        }
    }

    cout<<"\n\n\n";

    for (int b=4; b<10; b++)
    {
        if (b==5)
        {
            break;  // now here loop will be exited before the printing of 5
        }
        cout<<b<<endl;
    }

    cout<<"\n\n\n";
    int x=3;
    while (x<=12)
    {
        cout<<x<<endl;
        if (x==7)
        {
            x++;
            continue; // what this does is that it starts loop execution from above & forget about below part (only when condition is satisfied.)
        }
        cout<<"Sample text. will not get print where continue has been applied."<<endl;
        x++;
    }


// In this way we can use 'continue' & 'break' whenever neccessary in any of the loops..


    return 0;
}


