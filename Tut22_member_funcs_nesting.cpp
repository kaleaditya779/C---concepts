
#include <iostream>

using namespace std;


/* We can create objects of particular class, right during class creation =>
    class employee
    {
        // Class defination
    } obj1, adi, pinu; // These are objects of out class employee..
*/

// HARRYs code =>

// The nested member function is nothing but calling a member function inside some another member func.
// Nesting of func don't require any object.. the func which has been nested will automatically get called when the outside func is called by any particular object..


// IMP => We can nest a function i.e. it will ifself get executed inside that 2nd func, & at the same time we can make that func a PRIVATE function... So that no one can access that func from outside..


class binary
{
private:
    string s;
    void chk_bin(); //No one can access this func, directly. We have to make it nested function inside some other func to execute it automatically.

public:
    void read();
    void ones_compliment();
    void display();
};

void binary::read()
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void binary::chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary::ones_compliment()
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
       else
        {
            s.at(i) = '0';
        }
    }
}

void binary::display()
{
    cout<<"Displaying your binary number"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl;
}

int main()
{
    binary b;
    b.read();
    // b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();

    return 0;
}
// HARRYs code end





